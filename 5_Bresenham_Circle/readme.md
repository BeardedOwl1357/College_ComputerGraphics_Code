# Resources
[Part 1(Hindi)](https://youtu.be/aGsoLaqq5s4)

[Part 2 (Hindi)](https://youtu.be/MYGEJvL11Wg)

--------------------------------
# Algorithm
## Step 1 : Declaring some variables
```
p,q = Coordinates of center of circle

r = Radius of circle

x,y = The points which we will be plotting

d = Decision making parameter (heuristic)

```
## Step 2 : Initialising the variables
```
Initial Coordinates: x = 0, y = r

Calculate Value of d (heuristic) : d = 3 - 2r

```

## Step 3 : Starting the Algorithm Plot the points
- A circle is `8 way symmetric`
- Therefore, from a single point, we can generate the other 7 points which will be on the circle
- For points `(x,y)`, the points which should be plotted to create the circle are as follows
```
(x+p,y+q) , (y+q,x+p)

(-x+p,y+q) , (y+q,-x+p)

(x+p,-y+q) , (-y+q,x+p)

(-x+p,-y+q) , (-y+q,-x+p)

```
## Step 4 : Calculate the next points 
- The algorithm is solely based on decision making parameter `d`
- NOTE: At each step, `x` is incremented BUT whether `y` is decremented or not is dependent upon `d`
```
if d < 0:
	x = x + 1
	y = y
	d = d + (4*x) + 6
else: //(d >= 0)
	x = x + 1
	d = d + (4 * (x-y)) + 10
	y = y - 1
```

## Step 5 : Check for termination
```
Stopping condition of loop : IF (x >= y) THEN stop
```
- If the stopping condition of loop is not achieved, then go back to **Step 3**
