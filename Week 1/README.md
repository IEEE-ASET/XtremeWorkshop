# Week 1

Linear and Binary Search

## Summary

A [linear search](https://www.geeksforgeeks.org/linear-search/) looks down a list, one item at a time, without jumping. In complexity terms this is an O(n) search - the time taken to search the list gets bigger at the same rate as the list does.

A [binary search](https://www.geeksforgeeks.org/binary-search/) is when you start with the middle of a sorted list, and see whether that's greater than or less than the value you're looking for, which determines whether the value is in the first or second half of the list. Jump to the half way through the sublist, and compare again etc. This is pretty much how humans typically look up a word in a dictionary (although we use better heuristics, obviously - if you're looking for "cat" you don't start off at "M"). In complexity terms this is an O(log n) search - the number of search operations grows more slowly than the list does, because you're halving the "search space" with each operation.

## Questions discussed

* [ Discover the Monk ](https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/discover-the-monk/)
  *Hint*  
  > Solution

* [ Help Fredo ](https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/help-fredo/)
  *Hint*  
  > Solutiion
 
* [ AGGRCOW - Aggressive cows ](https://www.spoj.com/problems/AGGRCOW/)
  *Hint*  
  > Solution
