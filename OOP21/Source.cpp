#include<iostream>
using namespace std;



////Weak pointer 


//void main() {
//
//

//	shared_ptr<int> ptr( new int(10));
//	cout << "Count after one shared ptr : " << endl;
//	cout << ptr.use_count() << endl;
//	shared_ptr<int> ptr1=ptr;
//	weak_ptr<int>ptr2 = ptr1;
//	cout << "Count after adding one shared and one weak ptr : " << endl;
//	cout << ptr.use_count() << endl;
//
//	
// // weak pointer in diger pointerlerden ferqi odur ki use_count() methodu duzgun islemir, yeni weak pointer,increment ve decrement emeliyyatlarini duzgun yerine yetirmir.
////Weak pointer shared pointerin idare etdiyi obyekte istinad edir,Obyekti idare etmek ucun weakptri shared ptre convert etmek lazimdir.
////Weak ptr shared ptr in kopyasi kimi yaranir.
//
//
//
//
//
//}


// AUTO POINTER

//class A {
//public:
//    void show() { cout << "A::show()" << endl; }
//};
//
//int main()
//{
//    // p1 is an auto_ptr of type A
//    auto_ptr<A> p1(new A);
//    p1->show();
//
//    // returns the memory address of p1
//    cout << p1.get() << endl;
//
//    // copy constructor called, this makes p1 empty.
//    auto_ptr<A> p2(p1);
//    p2->show();
//
//    // p1 is empty now
//    cout << p1.get() << endl;
//
//    // p1 gets copied in p2
//    cout << p2.get() << endl;
//
//    return 0;
//}



//Smart pointer

//void main() {
	//shared_ptr<int> ptr(new int(10));
	//shared_ptr<int> ptr1 = ptr;
	//shared_ptr<int> ptr2 = move(ptr1);
	//shared_ptr<int> ptr3 = ptr2;
	//shared_ptr<int> ptr4 = ptr;
	//cout << ptr.use_count() << endl;
	//*ptr2 = 89;
	//cout << *ptr1 << endl;
//}

//Unique pointer


//void main() {
//
//	unique_ptr<int> ptr(new int(10));
//	unique_ptr<int> p = move(ptr);
//	p = move(ptr);
//}