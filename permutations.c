1. permutation(n){
2. for i = 1 to r
3. si = i
// Print the first permutation
4. print(s1, s2, ..., sr)
5. for i = 2 to n! {
6. m = n - 1
7. while (sm > sm+1)
// Find the last decrease
8. m = m - 1
9. k = n
10. while (sm > sk)
// Find the last element
greater than sm
11. k = k - 1
12. swap(sm, sk)
13. p = m + 1
14. q = n
15. while (p < q) {
// swap sm+1 and sn, swap sm+2
and sn −1, ...
16. swap(sp, sq)
17. p++
18. q--
19. }
// Print this new permutation
20. print(s1, s2, ..., sr)
21. }
22. }
