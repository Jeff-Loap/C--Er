#ifndef H_orderlinkedlist
#define H_orderlinkedlist
#include <iostream>
#include<iomanip>
using namespace std;

struct nodeType
{
	string ST_name;
	string matric;
	int year;
	double CGPA;
	nodeType *next;
};


class Lm
{
	public:
		void initializeList(); 
		bool isEmptyList() const;
		void print();
		void destroyList();
		void insert(string ,string ,int ,double);
		void listsort(nodeType* );
		void deleteNode(string ,string ,int ,double );
		bool search(string ,string ,int ,double )const;
		string temp1,temp2;
		double temp,temp3;
		nodeType* first=NULL; //pointer to the first node of the list
        nodeType* last=NULL;  //pointer to the last node of the list
		int count; 
        nodeType *m;
        nodeType *m1;
		Lm(); 
		~Lm();
		
		
}; 

bool Lm::isEmptyList() const
{
    return (first == NULL);
}

Lm::Lm() //default constructor
{
    first = NULL;
    last = NULL;
    count = 0;
}

Lm::~Lm(){
    destroyList();  //释放内存
}

void Lm::destroyList()
{
    nodeType *temp;   //pointer to deallocate the memory
                            //occupied by the node
    while (first != NULL)   //while there are nodes in the list
    {
        temp = first;        //set temp to the current node
        first = first->next; //advance first to the next node
        delete temp;   //deallocate the memory occupied by temp
    }

    last = NULL; //initialize last to NULL; first has already
                 //been set to NULL by the while loop
    count = 0;
}

void Lm::initializeList()
{
	destroyList(); //if the list has any nodes, delete them
}

void Lm::print() 
{
    while (first != NULL) //while more data to print
    {
    	cout<<left;
        cout<<setw(20)<< first->ST_name ;
        cout<<setw(25)<< first->matric ;
        cout<<setw(10)<< first->year ;
        cout<< first->CGPA <<endl;
        first = first->next;
    }
}//end print
void Lm::insert(string name,string matric,int year,double CGPA)
{
    nodeType *newNode;  //pointer to create a node
    bool  found;
    newNode = new nodeType(); //create the node
    newNode->ST_name = name;   
    newNode->matric = matric;
    newNode->year = year;
    newNode->CGPA = CGPA;
	newNode->next = first;      //set the next field of the node
    first=newNode;
    }//end insert
void Lm::listsort(nodeType *head) {
     head=first;
     for (m = head; m != NULL; m = m->next)
         for (m1 = m; m1 != NULL; m1 = m1->next)
             if (m1->CGPA > m->CGPA)//根据学号从小到大排序
             {
                double t1 = m->CGPA; m->CGPA = m1->CGPA; m1->CGPA = t1;
                string t2 = m->ST_name; m->ST_name = m1->ST_name; m1->ST_name = t2;
                int t3 = m->year; m->year = m1->year; m1->year = t3;
                string t4 = m->matric; m->matric = m1->matric; m1->matric = t4;
          }
     
     }
void Lm::deleteNode(string deletename,string deletematric,int deleteyear,double deleteCGPA)
{
    nodeType *current; //pointer to traverse the list
    nodeType *trailCurrent; //pointer just before current
    bool found;
 
    if (this->first == NULL) //Case 1
        cout << "Cannot delete from an empty list." << endl;
    else
    {
        current = this->first;
        found = false;
 
        while (current != NULL && !found)  //search the list
            if (current->ST_name >= deletename&&current->matric >= deletematric&&
			current->year >= deleteyear&&current->CGPA >= deleteCGPA)
                found = true;
            else
            {
                trailCurrent = current;
                current = current->next;
            }
 
        if (current == NULL)   //Case 4
            cout << "The item to be deleted is not in the list." << endl;
        else
            if (current->ST_name >= deletename&&current->matric >= deletematric
			&&current->year >= deleteyear&&current->CGPA >= deleteCGPA) //the item to be 
                                   //deleted is in the list
            {
                if (this->first == current)       //Case 2
                {
                    this->first = this->first->next;
 
                    if (this->first == NULL)
                        this->last = NULL;
  
                    delete current;
                }
                else                         //Case 3
                {
                    trailCurrent->next = current->next;
 
                    if (current == this->last)
                        this->last = trailCurrent;
 
                    delete current;
                }
                this->count--;
            }
            else                            //Case 4
                cout << "The item to be deleted is not in the list." << endl;
    }
}//end deleteNode

//int Lm::search(string name,string matric,int year,double CGPA) {
// 
//	nodeType *p;
//	p = first;
//	int index = 1;
//	while (p->ST_name != name&&p->matric != matric&&p->year != year
//	&&p->CGPA != CGPA && p->next != NULL) {
//		p = p->next;
//		index++;
//	}
//	if (p->ST_name == name&&p->matric == matric&&p->year == year
//	&&p->CGPA == CGPA)
//		return index;
//	else
//		return 0;
//}
bool Lm::search(string name,string matric,int year,double CGPA) const
{
    bool found;
    nodeType *current; //pointer to traverse the list
 
    current =this->first;  //start the search at the first node
 
    while (current != NULL && !found)
        if (current->ST_name == name&&current->matric == matric&&current->year == year
	&&current->CGPA == CGPA)
            found = true;
        else{
            current = current->next;}
    cout<<"Then we will get a 1 or 0 from 'found'.\n";
    cout<<"found = "<<found<<endl;
    cout<<"We can see that found is equal to 1.So it's true.\n";
    cout<<"We can find this message from the linklist.\n";
}
int main()
{
   Lm pl; 
   string q,q1;
   int q2;
   double q3;
   pl.insert("XXX","qw89345",2,3.67);
   pl.insert("XXY","bbbbbb",2,2.45);
   pl.search("XXY","bbbbbb",2,2.45);
   cout<<"After linked list sorted............\n";
   cout<<left<<setw(20)<<"Student name"<<setw(25)<<"matric number"<<setw(10)<<"Year"<<"CGPA\n";
   pl.listsort(pl.first);
   pl.print();
   cout<<"Please enter the corresponding matric to search.\n";
}
#endif
