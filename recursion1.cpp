// in recursion we try to solve a bigger problem by finding out solution to smaller sub problems we represent ther problems in the form of function and these functions calls itself to solve smaller subproblem
// the example goes like :
//     A child couldn't sleep, so her mother told a story about a little frog,
//       who couldn't sleep, so the frog's mother told a story about a little bear,
//         who couldn't sleep, so the bear's mother told a story about a little weasel,
//           ... who fell asleep.
//         ... and then the little bear fell asleep;
//       ... and then the little frog fell asleep;
//     ... and then the child fell asleep.

// PMI -  Principle of Mathematical Induction
// 1. Base case - 1st case
// 2. Inductive step (self work)- 2nd case
// 3. Inductive hypothesis - 3rd case 

int f(int n)
{
    if (n == 1)
    {
        rerturn 1
    }
    int ans = n * f(n - 1) return ans;
}

// | call stack , stack frame              |
// | f(1) , n = 1 , ans = 1                |
// | f(2) , n = 2 , ans = 2*f(1)           |
// | f(3) , n = 3 , ans = 3*f(2)           |
// | f(4) , n = 4 , ans = 4*f(3)           |
// | main() , f(4)                         |

// space complexity of recursive function : 
//     O(n) because we are storing n stack frames in the call stack and all other declaration is constant so n is the only order 
// time complexity of recursive function :
//     number of times function called * time consumed in one function call
//     O(n) because we are doing n recursive calls and each call is taking constant time so n is

// for fibbonaci series code in recursion space complexity is O(n) and time complexity is O(2^n)