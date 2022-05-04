#include <iostream>
using namespace std;

void InputArray(int A[], int N) {
    for (int i=0;i<N;i++)
    {
        cout<<"Nhap phan tu A["<<i+1<<"] = ";
        cin>>A[i];
    }
}

void OutputArray(int A[], int N) {
    for (int i=0; i<N; i++)
    {
        cout<<A[i]<<"\t";
    }
}

// void MaxArray(int A[], int N, M) { 
//     int M = 0;
//     for (int i=0; i<N; i++)
//     {
//         if (A[i+1] < A[i])
//             M = A[i];
//             i++;
//     }
// }
int main() {
    int A[100];
    int n;
    cout<<"Nhap do dai day : n = "; cin>>n;
    InputArray(A, n);
    // MaxArray(A, n);
    OutputArray(A, n);
    system("pause");
}