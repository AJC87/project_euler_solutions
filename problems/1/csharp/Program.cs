int start = 3;
int finish = 1000;
int sum = 0;

for (int i = start; i < finish; i++) 
{
    if ((i % 3 == 0) || (i % 5 == 0)) sum += i;
}

Console.WriteLine($"Answer is: {sum}");
