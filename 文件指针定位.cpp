#include <iostream>
 
using namespace std;
 
// ��λ�� fileObject �ĵ� n ���ֽڣ������� ios::beg��
fileObject.seekg( n );
 
// ���ļ��Ķ�ָ��� fileObject ��ǰλ������� n ���ֽ�
fileObject.seekg( n, ios::cur );
 
// ���ļ��Ķ�ָ��� fileObject ĩβ������ n ���ֽ�
fileObject.seekg( n, ios::end );
 
// ��λ�� fileObject ��ĩβ
fileObject.seekg( 0, ios::end );
