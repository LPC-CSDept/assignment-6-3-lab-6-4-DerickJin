#include <iostream>
int getSum(int n);

int main()
{
    using namespace std;
    int n_numbers, res;

    cout << "Enter number of numbers: ";
    cin >> n_numbers;

    res = getSum(n_numbers);
    cout << res << "\n";

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

        if(greatest < numbers[j])
        {
            greatest = numbers[j];
        }
    }
     
    for (int i = 0; i < n; i++)
    {
        
        // sum should be initialized before its use.
        
        sum += numbers[i];
        if (numbers[i] == smallest)
        {
            sum -= smallest;
        }
        if (numbers[i] == greatest)
        {
            sum -= greatest;
        }   
    }
    
    

    return sum;
}
