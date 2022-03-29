# Translation, Scaling and Rotation
# [Refer Slides](https://lms.thapar.edu/moodle/pluginfile.php/280262/mod_resource/content/1/2-D%20Transformations.pdf)
## Translation
### [Theory](https://youtu.be/n85QQy03_gI)
- Translation here means `change in location of a point`:
> Does not mean "convert from one language to other"

![Translation Basic](Images/Translation_Basic.png)
- This can be done easily: Just add an offset `tx` to `x` coordinate and `ty` to `y` coordinate:
	- `x' = x + tx`
	- `y' = y + ty`
- In matrix form, it is equivalent to:
![Translation Matrix](Images/Translation_Matrix.png)

### [Numerical](https://youtu.be/mzX6K0ATJRs)

--------------------------------------------------
## Scaling
### [Theory](https://youtu.be/eLmBR2HyLPo)
- It is used to either increase or decrease the size of the "graphic"
- The `x` and `y` coordinates are multiplied by a constant `sx` and `sy` respectively:
	- If `sx` and `sy` > 1, then size increases
	- If `sx` and `sy` < 1, then size decreases
	- If `sx` and `sy` = 1, then no change in size
	- If `sx` and `sy` are equal, then the change is uniform based on the values of `sx` and `sy` as discussed above
- The new coordinates after scaling `x'` and `y'` are determined as follows:
	- `x' = x * sx`
	- `y' = y * sy`
![Scaling Basic](Images/Scaling_Basic.png)

- The matrix form of scaling is represented as follows
![Scaling Matrix](Images/Scaling_Matrix.png)
### [Numerical](https://youtu.be/C2NaUGG_tns)

### Scaling About A Fixed Point
- The scaling which we have discussed above is performed when we consider scaling about the origin
- To scale about a fixed point, we do the following steps:
	- Translate the point to origin
	- Scale about the origin
	- Translate back to the fixed point
- The image below will explain succintly

![Scaling Fixed Point](Images/Scaling_FixedPoint.png)

--------------------------------------------------
## Rotation
[Theory Part 1](https://youtu.be/fXyrffB69gI)

[Theory Part 2](https://youtu.be/y8MNTRyn8pI)

[Numerical](https://youtu.be/p_iN8I6dM7Y)

--------------------------------------------------

# Shearing and Reflection
## Reflection
[Theory](https://youtu.be/ojteOGAqdmA)

[Numerical](https://youtu.be/F6YfTc3f-mQ)

## Shearing
[Theory](https://youtu.be/VnRtEtnruBw)

[Numerical](https://youtu.be/uBPHATW5KEk)

--------------------------------------------------
# Homogenous Coordinate
[Theory](https://youtu.be/rZUw02zBoDI)

--------------------------------------------------
# Composite Transformations
## Theory

## Numerical
- [ ] [Scaling About Fixed Point](https://youtu.be/J79MOSWgxTk)
