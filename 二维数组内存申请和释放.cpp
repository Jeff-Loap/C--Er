#include <iostream>
using namespace std;
 
int main()
{
    int **p;   // �Ǻŵĸ�������ά�� 
    int i,j;   //p[4][8] 
    //��ʼ����4��8�еĶ�ά����   
    p = new int *[4];    //�� 
    for(i=0;i<4;i++){
        p[i]=new int [8];//�� 
    }
 
    for(i=0; i<4; i++){  //������ֵ 
        for(j=0; j<8; j++){
            p[i][j] = j*i;
        }
    }   
    //��ӡ����   
    for(i=0; i<4; i++){
        for(j=0; j<8; j++)     
        {   
            if(j==0) cout<<endl; 
            cout<<p[i][j]<<"\t";   
        }
    }   
    //��ʼ�ͷ�����Ķ�   
    for(i=0; i<4; i++){
        delete [] p[i];   
    }
    
    delete [] p;   
    
    return 0;
}
/*     ��ʽ
 int **array
// �ٶ������һά����Ϊ m�� �ڶ�ά����Ϊ n
// ��̬����ռ�
array = new int *[m];
for( int i=0; i<m; i++ )
{
    array[i] = new int [n]  ;
}
//�ͷ�
for( int i=0; i<m; i++ )
{
    delete [] array[i];
}
delete [] array;
*/
 
