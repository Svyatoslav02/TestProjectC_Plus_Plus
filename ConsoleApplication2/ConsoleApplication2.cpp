#include <iostream>
#include <cassert>
#include <cmath>
#include <stdexcept>
#include <thread>
using std::cin;
using std::cout;
using std::endl;
using std::string;



class Math {
    int x;
    int y;
    public:
    explicit Math(int x) {
            this->x = x;
    }


};

//hallo

void change(const int*tmp) {
    int* return_value = const_cast<int*>(tmp);
    *return_value = 10;
}

class First {
public:
    virtual ~First() {}

};

class Second : public First {


};

int main() {

    First* obj = new First();

    Second* obj1 = dynamic_cast<Second*>(obj);



   /* const int x = 10;
    int* ptr = const_cast<int*>(&x);
    *ptr = 57;

    cout << x;*/


    //const int size = 1;
    //change(&size);

    //cout << size<<endl;

    double number = 10.5;

    float second_number= static_cast<float> (number);
    cout << second_number;

  //  using namespace NameSpace1::NameSpace2::NameSpace3;
  //  cout << finalNUmber << endl;
  //// using namespace NameSpace1::NameSpace2::NameSpace3;
  //  NameSpace1::NameSpace2::NameSpace3::show();
  //  BankAccount::Person obj("Mark");
  //  obj.show();


  //  BankAccount::show();

  //  cout<<BankAccount::result(3,3)<<endl;
  // // show();
    
}




//class Shape {
//public:
//    virtual ~Shape() = default;
//
//    virtual double calculateArea() const = 0;
//
//    virtual void displayInfo() const {
//        cout << "Shape: No specific information\n";
//    }
//};
//
//class Rectangle : public Shape {
//private:
//    double width;
//    double height;
//
//public:
//    Rectangle(double width, double height) : width(width), height(height) {
//        if (width <= 0 || height <= 0) { // implement the log
//            throw logic_error("Invalid dimensions for Rectangle.");
//        }
//    }
//
//    double calculateArea() const override {
//        
//        // implement the log
//        return width * height;
//    }
//
//    void displayInfo() const override {
//        cout << "Rectangle: Width = " << width << ", Height = " << height << endl;
//    }
//};
//
//class Circle : public Shape {
//private:
//    double radius;
//
//public:
//    Circle(double radius) : radius(radius) {
//        if (radius <= 0) { // implement the log
//            throw logic_error("Invalid radius for Circle.");
//        }}
//
//    double calculateArea() const override {
//        
//        // implement the log
//        return radius * radius;
//    }
//
//    void displayInfo() const override {
//        cout << "Circle: Radius = " << radius << endl;
//    }
//};
//
//// Test methods
//void tests() {
//    Rectangle rect(5, 10);
//    assert(rect.calculateArea() == 50);
//
//    Circle circle(7);
//    //assert(abs(circle.calculateArea() - 153.938) < 0.001);
//
//    // Test incorrect parameters
//    try {
//        Rectangle invalidRect(-5, 10);
//        invalidRect.calculateArea();
//        cout << "Rectangle with invalid dimensions test failed: Exception not thrown!" << endl;
//    }
//    catch (logic_error e) {
//        assert(string(e.what()) == "Invalid dimensions for Rectangle.");
//    }
//
//    // Test incorrect parameters
//    try {
//        Circle invalidCircle(0);
//        invalidCircle.calculateArea();
//        cout << "Circle with invalid radius test failed: Exception not thrown!" << endl;
//    }
//    catch (logic_error e) {
//        assert(string(e.what()) == "Invalid radius for Circle.");
//    }
//    Rectangle rect2(2.5, 4.2);
//    try {
//       // assert(abs(rect2.calculateArea() - 10.5) < 0.001);
//    }
//    catch (logic_error e) {
//        cout << "Rectangle (2.5 x 4.2) test failed: " << e.what() << endl;
//    }
//    Circle circle2(1.5);
//  //  assert(abs(circle2.calculateArea() - 7.068) < 0.001);
//
//
//}
//
//int main() {
//    try {
//        tests();
//        cout << "All tests passed!" << endl;
//    }
//    catch (logic_error e) {
//        cout << "Rectangle test failed: " << e.what() << endl;
//    }
//    catch (exception e) {
//        cout << "Test failed: " << e.what() << endl;
//    }
//}
//
#include <mutex>

//mutex mt;
//void show() {
//  //  mt.lock();
//    lock_guard<mutex>auto_lock(mt);
//    char arr[3] = { 'H','E','L' };
//    cout << "id: " << this_thread::get_id() << endl;
//    for (int i = 0; i < 3; i++) {
//        cout << arr[i] << " ";
//    }
//   // mt.unlock();
//}
//void show_heelo() {
//    cout << "Hello world" << endl;
//}

//class DisivionByZero :public exception {
//    string msg;
//public:
//    DisivionByZero() {}
//    DisivionByZero(string msg) {
//        this->msg = msg;
//    }
//    const char* what()const override {
//        return msg.c_str();
//    }
//};
//void divison(int a , int b) {
//
//    if (b == 0) {
//       throw "  if (b == 0) {}";
//    }
//    if (a == 1) {
//        throw - 1;
//    }
//    cout << a / b;
//}


//int main() {
//
//    //try {
//    //
//  /*      int number = 10;
//        int number_2 = 0;
//        cout << number / number_2;*/
//    
//    
//    //}
//    //catch (exception e) {
//    //    cout << e.what();
//    //}
//   /* cout << "Start"<<endl;
//    try {
//        cout << "Before divide" << endl;
//        divison(10, 0);
//        cout << "After divide" << endl;
//
//    }
//    catch (int) {
//        cout << "int" << endl;
//    }
//    catch (const char*) {
//        cout << "char"<< endl;
//    }
//    catch (DisivionByZero e) {
//        cout << "DisivionByZero: " << e.what() << endl;
//    }
//    catch (exception e) {
//        cout << "exception " << e.what() << endl;
//    }
//    catch (...) {
//        cout << "... Error" << endl;
//    }*/
//
//
//    thread my_th_1(show);
//    thread my_th_2(show_heelo);
//
//    my_th_1.join();
//    my_th_2.join();
//}
//


//
//class Factory {
//protected:
//    string model;
//    string name;
//public:
//    Factory() {}
//    Factory(string model, string name) {
//        this->name = name;
//        this->model = model;
//        cout << "Super class Const started" << endl;
//    }
//    void show() {}
//
//};
//class NewFactory:public Factory {
//    string newName;
//public:
//
//    NewFactory(string name) {
//        newName = name;
//    }
//    void show() {}
//};
//class Vag : public NewFactory{
//    string models_group;
//public:
//    Vag(string model, string name, string models_group,  string name__) :NewFactory(name__) {
//        this->models_group = models_group;
//    }
//    void show() {
//        cout << model << " " << name << " " << models_group<<endl;
//    }
//};
//
//class A {
//public:
//    virtual void say_hi() {
//        cout << "class A" << endl;
//    }
//};
//class B:public A {
//public:
//    void say_hi() override {
//        cout << "Class B" << endl;
//    }
//};
//class C :public B {
//public:
//    void say_hi()override {
//        cout << "Class C" << endl;
//
//    }
//
//};
//
//class Abstract_class {
//public:
//    virtual void print() = 0;
//    virtual void print_new() = 0;
//    virtual void print_last() = 0;
//    virtual ~Abstract_class();
//};
//class newClass : Abstract_class {
//
//public:
//    void print()override {
//        cout << "print" << endl;
//    }
//
//
//    ~newClass();
//};
//int main() {
//    /*
//    
//    
//    */
//
//}
////void show_info(int* ptr_arr, int size) {
//    int sum = 0;
//    for (size_t i = 0; i < size; i++)
//    {
//        sum += (ptr_arr[i]);
//    }
//    cout << sum;
//}
//struct my_type {
//    int id;
//    string name;
//    int age;
//public:
//    int get_id() {
//        return id;
//    }
//    void set_id(int tmp) {
//        id = tmp;
//    }
//    void show_info() {
//        cout << "name " << name << " age " << age << " id" << id << endl;
//    }
//    my_type() {}
//    my_type(string name,int age , int id) {
//        name = name;
//        age = age;
//        id = id;
//    }
//};

//
//void show(string name,int age) {
//
//    cout << name <<age<< endl;
//}
//int show(int age , int name) {
//    return age + name;
//}
//void show() {
//
//}
//void show(int d, int f,int g) {
//
//}

//string show_info() {
//    string text = "dsadas";
//    return text;
//}
//int s() {
//    return 2;
//}

//static int*size_array(int size) {
//    return new int[size];
//}
//void fill_array(int* arr, int size) {
//    for (size_t i = 0; i < size; i++)
//    {
//        arr[i] = rand() % 10 + 1;
//    }
//}
//void show_array(int* arr, int size) {
//    for (size_t i = 0; i < size; i++)
//    {
//        cout << arr[i] << " ";
//    }
//}
//void clear_array(int* arr) {
//    delete[]arr;
//}
//int*add_elem(int* arr, int&size, int number) {
//    int* new_mass = new int[size + 1];
//    for (int i = 0; i < size + 1; i++) {
//        new_mass[i] = arr[i];
//    }
//
//    new_mass[size] = number;
//    size++;
//   clear_array(arr);
//    return new_mass;
//}


//class Student {
//private:
//    string name;
//    int id;
//    int age;
//    static int counter;
//
//public:
//
//    Student(int _id, int _age) {
//        this->id = _id;
//        this->age = _age;
//        name = "HELLO";
//        counter++;
//
//    }
//    Student() { counter++; }
//    Student(string name , int id=0, int age=0) {
//        this->name = name;
//        this->age = age;
//        this->id = id;
//        cout << "Second construct started";
//        counter++;
//
//    }
//    Student(int _id, string _name, int _age) : name(_name), id(_id), age(_age)  {
//        cout << "Second construct started";
//        counter++;
//
//    }
//    void set_name(string name) {
//        this->name = name;
//    }
//    void set_id(int id)
//    {
//        this->id = id;
//    }
//    void set_age(int age) {
//        this->age = age;
//    }
//    string get_name() {
//        return this->name;
//    }
//    int get_id() {
//        return this->id;
//    }
//    int get_age() {
//        return this->age;
//    }
//    static void info(){}
//
//    static void set_counter() {
//        counter++;
//    }
//    static int get_counter() {
//        return counter;
//    }
//    ~Student() {
//        cout << "Destructor starder";
//    }
//};
//int Student::counter = 0;
//
//int main()
//{
  /*  Student obj, obj1, obj2, obj3;
    cout << Student::get_counter();*/

 /*   obj.set_name("Maks");
    obj.set_id(1);
    obj.set_age(12);
    cout << obj.get_age();*/



    //int size = 10;
    //int* first_mass = size_array(size);
    ////fill_array(first_mass,size);
    ////show_array(first_mass,size);
    ////cout << endl;
    //first_mass=add_elem(first_mass,size,123);
    //show_array(first_mass, size);
    //clear_array(first_mass);

    //
    //int number = 1;
    //int* ptr= &number;
    //cout << *ptr;
    //cout << ptr;
    /* my_type t1("asd",1,1);
    my_type t2 = {"asd",1,1};
    my_type t3;
    t3.name = "sadsa";
    my_type t4{ "sad",1,1 };*/
 /*   if (show_info() == "helo") {
        cout << "ok";
}
    else {
        cout << "No" << endl;
    }*/
    //time_t my_time=time(nullptr);
    //string name;
    //cin >> name;
    //time_t end_my_time= time(nullptr);


    //double time_my = difftime(end_my_time, my_time);
    //cout << time_my;

    //const int size = 10;
    //int mass[size] = { 1,1,1 }; //    0                       1 
    //string my_mass_1[size] = { "asdssdsadsdasdasd","sadasddasdasdasdasdasd" };
    //char my_char[size] = { 's' };
    //for (int i = 0; i < size; i++) {
    //    cout << mass[i] << " ";
    //}
   /* int matrix[3][3] = { {1,1,1},{1,1,1},{1,1,1} };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }cout << endl;
    }*/

 /* 
    const int size = 10;
    int mass[size] = { 4,5,1,41,5,1,5,2,52,6 };

    for (int i = 0; i < size-1; i++) {
        int last_index = i;
        for (int j = i+1; j < size; j++)
        {
            if (mass[j] < mass[last_index]) {
                last_index = j;
            }
        }
        swap(mass[i],mass[last_index]);
    }
    for (size_t i = 0; i < size; i++)
    {
        cout << mass[i]<<" ";
    }*/


   // vector<int> my_vector = {1,1,1,1};
   //// my_vector.push_back(43);//додає елемент в кінець списку 
   // //my_vector.empty();//метод який перевіряє чи пустий вектор
   //cout<< my_vector.capacity();//
   //cout << my_vector.size();
   // //for (int elem : my_vector) {
   // //    cout << elem << endl;
   // //}
   //my_vector.pop_back();
   //my_vector.erase(my_vector.begin()+3);
   //my_vector.end();

        //const int SIZE = 12;

        //double myMass[SIZE] = {};

        //int minIndex, minInd = 0, maxIndex, maxInd = 0;
        //double min = myMass[12], max = myMass[0];

        //for (int i = 0; i < SIZE; i++) {
        //    cout << "Enter profit: \t";
        //    cin >> myMass[i];
        //}

        //cout << "Enter min number of range: \t";
        //cin >> minIndex;
        //cout << "Enter max number of range: \t";
        //cin >> maxIndex;

        //if (minIndex < maxIndex) {
        //    for (int i = minIndex; i < maxIndex; i++)
        //    {
        //        if (min > myMass[i]) {
        //            min = myMass[i];
        //            minInd = i;
        //        }
        //    }
        //    for (int i = minIndex; i < maxIndex; i++) {
        //        if (max < myMass[i]) {
        //            max = myMass[i];
        //            maxInd = i;
        //        }
        //    }
        //    cout << "Max profit is: " << max << " in month number: " << maxInd << endl;
        //    cout << "Min profit is: " << min << " in month number: " << minInd << endl;
        //}
        //else if (minIndex < 0 || maxIndex < 0) {
        //    cout << "Something went wrong. \n";
        //}
        //else {
        //    cout << "Something went wrong. \n";
        //}

//int array[3][3] = { {3,1,2 }, {4,5,6},{7,8,9} };
//for (int i = 0; i < 3; i++)
//{
//    for (int j = 0; j < 3; j++) {
//        cout << array[i][j] << " ";
//    }
//    cout << endl;
//
//}
//for (int i = 0; i < 3; i++)
//{
//    for (int j = 0; j < 3; j++) {
//        int value = array[1][j];
//        array[1][j] = array[0][j];
//        array[0][j] = value;
//}
//    
//}
//for (int i = 0; i < 3; i++)
//{
//    for (int j = 0; j < 3; j++) {
//        cout << array[i][j] << " ";
//    }
//    cout << endl;
//
//}

//int first_value = 5;
//
//for (size_t i = 0; i < 5; i++)
//{
//    first_value *= 5;
//}

//int arr[5] = { 2,2,2,2,2 };
//int* ptr = &arr[0];
//int* prt_arr = arr;
//for (size_t i = 0; i < 5; i++)
//{
//    cout << prt_arr[i] << " ";
//}
//show_info(arr,5);

//int* ptr_number = new int;
//*ptr_number = 10;
//cout << *ptr_number;
//
//delete ptr_number;

//int size;
//cin >> size;
//cout << endl;
//int* my_arr = new int[size];
//
//for (size_t i = 0; i < size; i++)
//{
//    my_arr[i] = rand() % 50 + 1;
//
//}
//for (size_t i = 0; i < size; i++)
//{
//    cout << my_arr[i] << " ";
//}
//
//delete []my_arr;


//int* ptr_value = nullptr;
//int *name = nullptr;
//if (ptr_number != nullptr) {
//    
//}
//else {
//
//}



//ifstream- read
//ofstream- write
//
//fstream - read/write
//

/*
app - add text to file
in- open file for reading
out  - open for writting/ rewritting 
binary 
ate - 
trunc 
*/
//ofstream f("task.txt",ios::app, ios::in);
//if (f.is_open()) {
//    f << "HELLO NEW " << endl;
//    cout << "OK" << endl;
//    f.close();
//}
//else {
//    cout << "not" << endl;
//}
//ifstream fs("task.txt");
//if (fs.is_open()) {
//    cout << "file is opened" << endl;
//    string text;
//    while (fs >> text) {
//        cout << text << " ";
//   }
//    fs.close();
//}
//}


/*
*  0 1 2
 _______
 0|3 3 3 
 1|3 3 3
 2|3 3 3

*/

// Розробіть клас BankAccount, який містить :
//
// Поля: номер рахунку, ім’я власника, баланс.
// Методи :
//    Депозит,
//    Зняття коштів,
//    Перегляд балансу .


//
//
//#include <iostream>
//#include <ctime>
//using namespace std;
//
//
//
//class BankAccount {
//public:
//    BankAccount(int IBAN, string Name, int Balance) {
//        this->IBAN = IBAN;
//        this->Name = Name;
//        this->Balance = Balance;
//    }
//    BankAccount() {
//        IBAN = 0000;
//        Name = "Name";
//        Balance = rand() % 5000 + 1;
//    }
//
//    void Use_Deposit(int* val) {
//        Deposit(*val);
//    }
//
//    int Give_money() {
//        return Return_Money();
//    }
//
//    void Show_balance() {
//        Show_Balance();
//    }
//
//    ~BankAccount() {
//        cout << "Destructor starder";
//    };
//
//
//private:
//    int IBAN;
//    string Name;
//    int Balance;
//
//    void Show_Balance() const {                             /////////// Вижуалка сама предложила сделать CONST void, зачем ? 
//        cout << "You balance equal: " << Balance << endl;
//    }
//
//    int Return_Money() {
//        return Balance;
//    }
//
//    double Deposit(int Percent) {
//        int* p_Balance = &Balance;
//        cout << "You opening Deposit, you Balance equal: " << *p_Balance << endl;
//    /*    *p_Balance = *p_Balance / 100 * Percent + *p_Balance;*/
//        cout << "You Balance equal now: " << *p_Balance << endl;
//        return (double)*p_Balance / 100 * Percent + *p_Balance;
//        /* time_t seconds = time(nullptr);
//             while(seconds < 11){
//             if (seconds % 1 == 0) cout << " . ";
//             if (seconds == 10) {
//                 *p_Balance = *p_Balance * (Percent / 100) + *p_Balance;
//                 cout << "You balance: " << *p_Balance << " thank you !" << endl;
//             }
//         }*/
//    }
//};

//Створіть клас Product, який містить :
//
//Поля: назва, ціна, кількість на складі.
//Методи :
//    Конструктор,
//    Метод для продажу товару,
//    Метод для поповнення запасів,
//    Метод для відображення інформації про товар.

//class Product {
//
//public:
//    void show_inf() {
//        cout << endl << "Name: " << Name << endl;
//        cout << "Cost: " << cost << endl;
//        cout << "Quantity at store: " << quantity << endl;
//    }
//    void set_product(int quantity) {
//        this->quantity = quantity;
//    }
//
//    void sell() {
//        Sell();
//    }
//
//    Product() {
//        Name = "Product";
//        cost = 100;
//        quantity = 5;
//    }
//    Product(string Name, int cost, int quantity) {
//        this->Name = Name;
//        this->cost = cost;
//        this->quantity = quantity;
//
//    }
//private:
//    string Name;
//    int cost;
//    int quantity;
//
//    void Sell() {
//        int pay;
//        cout << endl << "The product costs" << cost << " please make a payment" << endl;
//        cin >> pay;
//        if (quantity > 0) {
//            if (pay >= cost) {
//                cout << "Success" << endl;
//            }
//            else if (pay < cost) {
//                cout << "Not success" << endl;
//            }
//            else {
//                cout << "EROR" << endl;
//            }
//        }
//    }
//
//};
