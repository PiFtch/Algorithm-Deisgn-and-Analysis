


3.3 煎饼排序
    分治法，首先将n块煎饼中最大的一块翻至底，问题规模降为(n-1)
    将k块煎饼中最大的一块翻至底有以下情况
        1.最大的一块已在底面 0
        2.在顶部，需要翻一次 1
        3.在中间，先将其翻至顶部，再翻至底部 2
        为常数时间
    T(n) = T(n-1) + O(1) = ··· = O(n)

    证明：
        n=1时，煎饼已经有序
        假设n<=k-1时，算法能够将煎饼堆调整至有序
        当n=k时，通过至多两步将最大煎饼翻至底部，之后仅需要调整其上k-1块煎饼，根据假设，算法能够将上方k-1块煎饼调整至有序，从而k块煎饼全部有序
        证毕

3.4 改进PREVIOUS-LARGER
    数组p中存放每个位置的previous-larger，对原数组的i，初始化p[i] = i-1，从p[i]向前遍历，直至找到比data[i]大的元素，未找到则置为-1
    证明：
        当n=1时，显然正确
        假设n<=k-1时，算法正确，即p[i]是data[i]的左侧最右大于元素
        当n=k时，对于前k-1个元素的序列，由假设可知p[0...k-2]均正确；
            对于第k个元素(k-1), 从索引为k-2开始查找
    
    T(n) = 1+2+2+2+...+2 = O(n) Ω(n)显然 => Θ(n)

3.6 微博名人问题
    暴力遍历
    Algorthm:find-cele(A[1..n])
    set celeb, norm;
    for i:=1 to n do
        for j:=1 to n do
            if j == i do
                continue;
            if A[i] follows A[j] && A[i] not in norm do
                add A[i] to norm;
            if A[i] in norm && A[i] doesn't follow A[j] do
                add A[j] to norm;
    for i:=1 to n do
        if A[i] not in norm do
            foreach a in set norm do
                if a doesn't follow A[i] do
                    add A[i] to norm;
            if A[i] not in norm do
                add A[i] to cele;



    Algorithm:find-cele(A[1..n])
    set celeb, norm;
    for i:=1 to n do
        for j:=i+1 to n do
            if A[i] follow A[j] do
                add A[i] to norm;qw


3.7 最大和连续子序列
1. O(n^3)
    寻找一个连续子序列，首先通过遍历选择子序列的头i，再通过遍历找到尾j，最后遍历此序列求和
2. O(n^2)
    简化1中对尾的遍历，对于选择的头，每向后遍历一个数，就计算这一序列的和，从而找到对应这一头i的最大连续子序列，最后比较所有头的最大连续子序列
3. O(n) 分治

4. O(nlogn)