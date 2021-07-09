#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> grayCode(int n) {
        int size = 1<<n;
        vector<int> grayCodes(size,0);
		int gDecNum=0;
        for(int i = 0; i < size; i++){
            gDecNum = i ^ (i>>1);   // ��ѧ��ʽdigG[i]=i ^ i/2��gDecNum��һ���������Ӧ�Ķ����������洢ʱ���int(ʮ����) 
            grayCodes[i] = gDecNum;
        }
        return grayCodes;
    }
};

// ����Ϊ���Բ���
int main()
{
	int n,j;
	vector<int> arr,display;
	cin>>n;
	
	Solution sol;
	display=sol.grayCode(n);
	for(j=0;j<display.size();j++)
	{
		cout<<display[j]<<" ";
	}
	cout<<endl;
	return 0;
}