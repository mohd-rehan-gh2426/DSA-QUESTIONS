#include <iostream>
using namespace std;

void FindFibo(int num)
{
    // Handle edge cases when num is 0 or 1
    if (num <= 0)
    {
        cout << "Please enter a positive integer." << endl;
        return;
    }

    if (num == 1)
    {
        cout << 0 << endl; // F(0) = 0
        return;
    }
    if (num == 2)
    {
        cout << 1 << endl; // F(1) = 1
        return;
    }

    // Initialize the first two Fibonacci numbers
    int i = 0; // F(0)
    int j = 1; // F(1)
    int fib = 0;

    // Loop to calculate Fibonacci number for the 'num'th term
    for (int k = 3; k <= num; k++)
    {                // Start from k = 3, since we know F(0) and F(1)
        fib = i + j; // Calculate the next Fibonacci number
        i = j;       // Move to the next number in the sequence
        j = fib;     // Update the second number
    }

    cout << fib << endl; // Output the Fibonacci number at position 'num'
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    FindFibo(num);
}

/*Fibonaci series by using array*/

#include <iostream>
using namespace std;

void FindFibo(int num, int arr[])
{

    int fib;
    int k;

    if (num == 1)
    {
        cout << arr[0];
    }

    else if (num == 2)
    {
        cout << arr[1];
    }

    else
    {

        for (k = 3; k <= num; k++)
        {
            arr[k - 1] = arr[k - 2] + arr[k - 3];
        }

        cout << arr[num - 1];

        //   for(int i = 0;i<num;i++){
        //       cout<<arr[i]<<endl;
        //   }
    }
}

int main()
{
    int arr[1000];
    int num;
    arr[0] = 0;
    arr[1] = 1;
    cout << "Enter a number :";
    cin >> num;

    FindFibo(num, arr);
}