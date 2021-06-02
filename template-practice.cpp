#include <iostream>
using namespace std;

template <typename t>

// t temp(t a, t b)
// {
//     if (a > b)
//         return a;
//     else
//     {
//         return b;
//     }
// }


 class pairr{
     t a;
     t b;
     public: 
     pairr(t a, t b){
        this->a=a;
        this->b=b;

     }
     void getfirst(){
         cout<<"first element : "<<a<<endl;
     }
     void getsecond(){
         cout<<"second element : "<<b<<endl;
     }
 };
int main()
{

    // cout << temp<int>(2, 0.7) << endl;
    // cout << temp<char>('c', 'f') << endl;
    // cout << temp<float>(2.5, 7.6) << endl;
    // cout << temp<bool>(0, 1) << endl;
    // cout << temp<string>("nikhil", "pikhim") << endl;

     pairr <int> p(4,6);
     p.getfirst();
     p.getsecond();
     pairr<char> q ('c','f');
     q.getfirst();
     q.getsecond();
     pairr<float> r (1.2,9.6);
     r.getfirst();
     r.getsecond();

    return 0;
}