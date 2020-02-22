# Order-The-Tasks
Problem statement:
-You are given the set of tasks such that some tasks are dependent on the other tasks. If some task
is dependent on the another task, then that task has to be completed before completing the
dependent task. For example, if task 0 is dependent on task 1 Then task 1 has to be finished before finishing the task 0. So, given the number of tasks and
dependencies among them, this assignment expects you to find the following:
1. Whether there exists a sequence in which all the tasks can be completed.
2. If a sequence exists, then print the corresponding sequence.
- It is important to note here that there can be multiple sequences in which tasks can be completed
you have to print the one which is in task ID order
- Input Format:
- First line of input contains an integer number t denoting the number of sub-test cases. Single
input may contain multiple sub-test cases. Next line of input contains two integers n and e
denoting the number of tasks and number of dependencies among the tasks respectively. Each of
the next e lines denotes the dependencies among the tasks.
- Constraints:
1<=t<=10
1<=n<=103
1<=e<=106
- Note: 0 <=Task ID of any task <= n-1
- Output Format:
- For each sub-test case first line of the output either prints “YES” if there exists the sequence in
which all the tasks can be completed else prints “NO”. Next line prints the corresponding
sequence (in task ID order) if the answer is “YES”. A task can be dependent on itself in that case
print “NO”.
