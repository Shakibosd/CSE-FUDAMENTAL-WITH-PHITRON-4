//13. Time complexity = O(1) in best case and O(max(a, b)) worst case.
void fun(int a, int b)
{
    // Consider a and b both are positive integers
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
}
//If the value of a and b are the same, then while loop will not be executed. Hence, time complexity will be O(1). 
//But if a!=b, then the while loop will be executed. Let a=16 and b=5;
