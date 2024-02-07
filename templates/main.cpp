#include <array>
template <typename T> T myMax(T x, T y)
{
    return (x > y) ? x : y;
}
 
template <class T> void bubbleSort(T a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1])
                swap(a[j], a[j - 1]);
}

template <typename t> t multiply(t first, t second)
{
    return first * second;
}

// defining class template
template <typename t>
class student {
private:
    string student_name;
    // Notice type 't' below
    t total_marks;
 
public:
    student();
    // parameterized constructor
    student(string n, t m)
    {
        student_name = n;
        total_marks = m;
    }
 
    void getinfo()
    {
        cout << "STUDENT NAME: " << student_name << endl;
        cout << "TOTAL MARKS: " << total_marks << endl;
        cout << "Type ID: " << typeid(total_marks).name()
             << endl;
    }
};



int main() {

    std::array<int, 5> t = {};
    
    t[0] = 1;
    t[1] = 3;
    

    return 0;
}