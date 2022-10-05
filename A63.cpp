#include <iostream>
int getSum(int n);

int main()
{
    using namespace std;
    int n_numbers, res;

    cout << "Enter number of numbers: ";
    cin >> n_numbers;

    res = getSum(n_numbers);
    std::cout << "The summation is " << res << "\n";

    return 0;
}

int getSum(int n)
{
    using namespace std;
    int N = 10, numbers[N], sum;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter in number: ";
        cin >> numbers[i];
    }

    int smallest = numbers[0];
    int greatest = numbers[0];

    for (int j = 1; j < n; j++)
    {
        if (smallest > numbers[j])
        {
            smallest = numbers[j];
        }
        
    }
    for (int i = 1; i < n; i++)
    {
        if(greatest < numbers[i])
        {
            greatest = numbers[i];
        }
    }   
    for (int i = 0; i < n; i++)
    {
        sum += numbers[i];
    }
    sum -= smallest + greatest;    
    return sum;
}