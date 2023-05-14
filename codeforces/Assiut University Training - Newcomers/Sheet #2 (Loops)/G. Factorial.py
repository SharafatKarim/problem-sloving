# // https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G
# #include<stdio.h>

# int main()
# {
#     int test_cases;
#     scanf("%d", &test_cases);
#     int cases[test_cases];
#     int i, j;
#     long long int result;
#     for (i = 0; i < test_cases; i++)
#         scanf("%d", &cases[i]);
    
#     for (i = 0; i < test_cases; i++)
#     {
#         result = 1;
#         for ( j = 1; j <= cases[i]; j++ )
#             result *= j;
#         printf("%d\n", result); 
#     }
# }

# take input and make a list of that number with range
test_cases = int(input())
cases = [int(input()) for i in range(test_cases)]
# calculate the factorial of each number in the list
for i in range(test_cases):
    result = 1
    for j in range(1, cases[i]+1):
        result *= j
    print(result)
