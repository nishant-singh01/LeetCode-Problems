<h2><a href="https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array">1574. Maximum Product of Two Elements in an Array</a></h2><h3>Easy</h3><hr>Given the array of integers <code>nums</code>, you will choose two different indices <code>i</code> and <code>j</code> of that array. <em>Return the maximum value of</em> <code>(nums[i]-1)*(nums[j]-1)</code>.
<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [3,4,5,2]
<strong>Output:</strong> 12 
<strong>Explanation:</strong> If you choose the indices i=1 and j=2 (indexed from 0), you will get the maximum value, that is, (nums[1]-1)*(nums[2]-1) = (4-1)*(5-1) = 3*4 = 12. 
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,5,4,5]
<strong>Output:</strong> 16
<strong>Explanation:</strong> Choosing the indices i=1 and j=3 (indexed from 0), you will get the maximum value of (5-1)*(5-1) = 16.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> nums = [3,7]
<strong>Output:</strong> 12
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= nums.length &lt;= 500</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10^3</code></li>
</ul>

<hr>

<h1>Solution</h1>
<h2>Approach 1:- Sorting-Based Approach</h2>

<ul>
    <li>Sort the array in ascending order.</li>
    <li>Select the two largest elements.</li>
    <li>Subtract 1 from each element.</li>
    <li>Multiply the results and return the answer.</li>
</ul>

<hr>

<h2>Algorithm</h2>

<ol>
    <li>Sort the array.</li>
    <li>Store the last two elements of the sorted array.</li>
    <li>Calculate <code>(largest - 1) * (secondLargest - 1)</code>.</li>
    <li>Return the result.</li>
</ol>

<hr>

<h2>Time Complexity</h2>

<p><b>O(n log n)</b></p>

<h2>Space Complexity</h2>

<p><b>O(1)</b> (excluding the sorting algorithm's internal space)</p>

<hr>

<h2>Key Learning</h2>

<ul>
    <li>Sorting makes it easy to find the two largest elements.</li>
    <li>The maximum product is always obtained from the two largest values.</li>
    <li>This solution is simple, clean, and efficient.</li>
</ul>

<hr>

<h2>Approach 2:- Optimal Approach</h2>

<ul>
    <li>Traverse the array only once.</li>
    <li>Maintain two variables:
        <ul>
            <li><code>first</code> - the largest element.</li>
            <li><code>second</code> - the second largest element.</li>
        </ul>
    </li>
    <li>If the current element is greater than <code>first</code>, update both <code>first</code> and <code>second</code>.</li>
    <li>Otherwise, if it is greater than <code>second</code>, update <code>second</code>.</li>
    <li>Finally, return <code>(first - 1) * (second - 1)</code>.</li>
</ul>

<hr>

<h2>Algorithm</h2>

<ol>
    <li>Initialize <code>first</code> and <code>second</code> to 0.</li>
    <li>Traverse the array once.</li>
    <li>Update the two largest elements whenever required.</li>
    <li>Compute and return <code>(first - 1) * (second - 1)</code>.</li>
</ol>

<hr>

<h2>Time Complexity</h2>

<p><b>O(n)</b></p>

<h2>Space Complexity</h2>

<p><b>O(1)</b></p>

<hr>

<h2>Key Learning</h2>

<ul>
    <li>The array does not need to be sorted when only the two largest elements are required.</li>
    <li>Keeping track of the largest and second largest elements during a single traversal reduces the time complexity from <b>O(n log n)</b> to <b>O(n)</b>.</li>
    <li>This is the optimal solution for the problem.</li>
</ul>
