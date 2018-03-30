/*
Input:
First line of the input contains 3 integers, . Representing number of hours in a day, number of crew members and number of queries respectively.
Next C lines follow, where each line contains 3 integers, , representing height of the crew member and start and end hour of his/her work schedule. He/she works for hours , both inclusive.
Next Q lines follow, each containing 2 integers,

, representing height and time (in hour) of the person trying to enter the club.

Output:
Q lines, each line containing "YES" or "NO", without the quotes, answering if the person will be allowed to enter the club or not.


10 1 5
50 2 6
10 1
10 2
50 5
51 6
100 10


YES
NO
NO
YES
YES

During the first hour, there is no crew member and hence person is allowed.
During hours 2 and 5, person is not taller than crew member, hence is not allowed to enter.
4th person is taller than the crew member at work and hence person is allowed.
During the 10th hour, there is no crew member and hence person is allowed.

 */
