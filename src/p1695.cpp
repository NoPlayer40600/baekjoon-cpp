/*
 * 문제
 * 앞에서 뒤로 보나, 뒤에서 앞으로 보나 같은 수열을 팰린드롬 이라고 한다.
 * 예를 들어 {1}, {1, 2, 1}, {1, 2, 2, 1}과 같은 수열은 팰린드롬 이지만,
 * {1, 2, 3}, {1, 2, 3, 2} 등은 팰린드롬이 아니다.
 * 
 * 한 수열이 주어졌을 때, 이 수열에 최소 개수의 수를 끼워 넣어 팰린드롬을 만들려고 한다.
 * 최소 몇 개의 수를 끼워 넣으면 되는지를 알아내는 프로그램을 작성하시오.
 * 
 * 입력
 * 첫째 줄에 수열의 길이 N(1≤N≤5,000)이 주어진다.
 * 다음 줄에는 N개의 수열을 이루는 수들이 주어진다.
 * 각 수들은 int 범위이다.
 * 
 * 출력
 * 첫째 줄에 끼워 넣을 수들의 최소 개수를 출력한다.
 * 
 * 예제 입력 1 
 * 5
 * 1 2 3 4 2
 * 예제 출력 1 
 * 2
*/

#include <cstdio>

int main(int argc, char *argv[])
{
    // Initialize Variables
    int n = 0;
    int *array = nullptr;

    // Input N
    scanf("%d", &n);
    array = new int[n];

    // Input Array
    for (int loop = 0; loop < n; loop++)
        scanf("%d", &array[loop]);

    // Debug
    for (int loop = 0; loop < n; loop++)
        printf("%d ", array[loop]);
    printf("\n");

    // Palindrome
    
    return 0;
}