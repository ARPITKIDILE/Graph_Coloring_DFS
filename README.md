# GRAPH_COLORING_PROBLEM
## A Implementation of the Graph Coloring Problem using DFS.

*************************************
### *Description*: 

*Solution to Graph Coloring problem using Depth First Search (DFS) using minimum colors.*

```
The problem is, given m colors, find a way of coloring the vertices of a graph such that no two adjacent vertices are colored using same color.
Graph coloring is the procedure of assignment of colors to each vertex of a graph G such that no adjacent vertices get same color. The objective is to minimize the number of colors while coloring a graph. The smallest number of colors required to color a graph G is called its chromatic number of that graph. Graph coloring problem is a NP Complete problem.
```
*****************************************
### *Language used*:

C++
*****************************************

### *Methodology*: 
```
The steps required to color a graph G with n number of vertices are as follows −
1.Arrange the vertices of the graph in some order.
2.Choose the first vertex and color it with the first color.
3.Choose the next vertex and color it with the lowest numbered color that has not been colored on any vertices adjacent to it. If all the adjacent vertices are colored with this color, assign a new color to it. Repeat this step until all the vertices are colored.
```
**************************************

### *Running the code*:

```
1. Download the repository.
2. Open DEVC++ IDE and and run the code.
3. Enter the number of nodes.
4. Enter the number of edges.
5. Insert the edges in format (a,b).
6. Enter the starting node to begin.
```
***************************************

### *Example*: 
```
Following in an example to demonstrate:-

Enter no. of nodes                                                                                                                              
6                                                                                                                                               
Enter no. of edges                                                                                                                              
10                                                                                                                                              
Enter edges as (a,b)                                                                                                                            
0 5                                                                                                                                             
0 1                                                                                                                                             
5 4                                                                                                                                             
1 2                                                                                                                                             
4 3                                                                                                                                             
2 3                                                                                                                                             
5 2                                                                                                                                             
1 4                                                                                                                                             
4 2                                                                                                                                             
5 1                                                                                                                                             
Enter the starting node for coloring                                                                                                            
0                                                                                                                                               
OUTPUT IS                                                                                                                                       
                                                                                                                                                
NODE        COLOR                                                                                                                               
0     ==>     1                                                                                                                                 
5     ==>     2                                                                                                                                 
4     ==>     1                                                                                                                                 
3     ==>     2                                                                                                                                 
2     ==>     3                                                                                                                                 
1     ==>     4
```
**************************************
