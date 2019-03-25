
4.2 证明：活动区间等价刻画了深度优先遍历的过程
    当DFS遍历到一个节点时，设置其discover-time，标志着这一节点活动区间的起点，当遍历完这一节点的所有后继时，设置其finish-time，作为活动区间终点。
    1) 若w是v的后继节点，则w的discover-time必然晚于v的活动区间起点，并且w的finish-time必然再v的终点之前，->得证
       若active(w)真包含于active(v)，w的发现时间晚于v，而结束时间早于v，意味着再v的遍历过程中，w的遍历过程已经结束，有DFS定义可知w是v的DFS后继节点

4.4 证明：v为割点，当且仅当存在节点对w和x满足点v出现再w到x的所有路径上

4.5 
    对于有向边uv，v.finishtime < u.discovertime，则有v在开始遍历u之前已经遍历结束。
    TE：不可能。若为TE，则v.finishtime > u.discovertime，矛盾
    BE：不可能。若为BE，则v是u的祖先节点，根据活动区间定理，active(v)必然包含active(u)，意味着v.finishtime > u.discovertime，矛盾
    DE：可能。若为DE，则v是u的后继节点，并且v在之前已经访问到，有v.finishtime < u.discovertime
    CE：可能。若为CE，则uv之间无祖先后继关系，且v不是白色节点，若v是灰色结点，则表明v是u的祖先，不可能；若v是黑色节点，则v已经访问完毕，它可能是u的某一祖先
    的另一条已处理完毕的分支上的节点，v.finishtime < u.discovertime