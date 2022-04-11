
#include <iostream>
#include<iomanip>
using namespace std;

struct nodeType
{
    string ST_name;
    string matric;
    int year;
    double CGPA;
    nodeType* next;
};


class Lm
{
public:
    void initializeList();
    bool isEmptyList() const;
    void print();
    void destroyList();
    void insert(string, string, int, double);
    void listsort(nodeType*);
    void deleteNode(string, string, int, double);
    void search(string)const;
    string temp1, temp2;
    double temp, temp3;
    nodeType* first = NULL; //pointer to the first node of the list
    nodeType* last = NULL;  //pointer to the last node of the list
    int count;
    nodeType* m;
    nodeType* m1;
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

Lm::~Lm() {
    destroyList();  //释放内存
}

void Lm::destroyList()
{
    nodeType* temp;   //pointer to deallocate the memory
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
    cout << left << setw(20) << "Student name" << setw(25) << "matric number" << setw(10) << "Year" << "CGPA\n";
    while (first != NULL) //while more data to print
    {
        cout << left;
        cout << setw(20) << first->ST_name;
        cout << setw(25) << first->matric;
        cout << setw(10) << first->year;
        cout << first->CGPA << endl;
        first = first->next;
    }
}//end print
void Lm::insert(string name, string matric, int year, double CGPA)
{
    nodeType* newNode;  //pointer to create a node
    bool  found;
    newNode = new nodeType(); //create the node
    newNode->ST_name = name;
    newNode->matric = matric;
    newNode->year = year;
    newNode->CGPA = CGPA;
    newNode->next = first;      //set the next field of the node
    first = newNode;
}//end insert
void Lm::listsort(nodeType* head) {
    head = first;
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
void Lm::deleteNode(string deletename, string deletematric, int deleteyear, double deleteCGPA)
{
    nodeType* current; //pointer to traverse the list
    nodeType* trailCurrent=new nodeType; //pointer just before current
    bool found;

    if (this->first == NULL) //Case 1
        cout << "Cannot delete from an empty list." << endl;
    else
    {
        current = this->first;
        found = false;

        while (current != NULL && !found)  //search the list
            if (current->ST_name >= deletename && current->matric >= deletematric &&
                current->year >= deleteyear && current->CGPA >= deleteCGPA)
                found = true;
            else
            {
                trailCurrent = current;
                current = current->next;
            }

        if (current == NULL)   //Case 4
            cout << "The item to be deleted is not in the list." << endl;
        else
            if (current->ST_name >= deletename && current->matric >= deletematric
                && current->year >= deleteyear && current->CGPA >= deleteCGPA) //the item to be 
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
void Lm::search(string matric) const
{
    bool found=false;
    nodeType* current; //pointer to traverse the list

    current = this->first;  //start the search at the first node

    while (current != NULL && !found)
        if (current->matric == matric)
            found = true;
        else {
            current = current->next;
        }
    if (found==true)cout << "This student is active!\n";
    else cout << "Can't find this student!\n";
    
}
int main()
{
    Lm pl;
    string q, q1;
    int q2;
    double q3;
    string name, matric;
    double cgpa;
    int year;
    int cho=0;

    while (cho != -1) {
        cout << "Function Menu\n"
            "Enter number '1' '2' '3' '4' '-1' to select the corresponding function...\n"
            "Number 1: Insert student information.Please input name, student number, year, CGPA in order. (separated by spaces)\n"
            "Number 2: Search student information.Input the matric to search.\n"
            "Number 3: Sort the form.\n"
            "Number 4: Delete one of the information.The input format is the same as Insert.\n"
            "Number 5: Print the form.\n"
            "Number -1: Exit.\n";
        cin >> cho;
        while (cho > 5 || cho < 1 && cho != -1)
        {
            cin.clear();
                cout << "Error input, clear input cache.try again.\n";
                cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); //如果Dev C++无法运行则将括号里面的内容删除即可。
                cin >> cho;
        }//清除 CIN 的缓存，防止其他字符对 int 内存的破坏(从而造成无限循环)。
        
        switch (cho)
        {
        case 1:
            cout << "Please input name, student number, year, CGPA in order. (separated by spaces)\n";
            cin >> name >> matric >> year >> cgpa;
            pl.insert(name, matric, year, cgpa);
            break;
        case 2:
            cout << "Input the matric to search.\n";
            cin >> matric;
            pl.search(matric);
            break;
        case 3:cout << "Sorting...................................\n";
            pl.listsort(pl.first);
            cout << "Sort done!\n";
            break;
        case 4:
            cout << "Please input name, student number, year, CGPA in order. (separated by spaces)\n";
            cin >> name >> matric >> year >> cgpa;
                pl.deleteNode(name,matric,year,cgpa);
                break;
        case 5:pl.print();
        case -1:break;
        default:
            break; 
        }
        if (cho == -1) break;
        else cho = 0;
        cout << endl;
    }
}