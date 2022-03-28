# Flood Fill Algorithm
## [Video (Hindi)](https://youtu.be/zWqxSvkn9qk)
- Used to handle the case when boundaries have different colors
- This algorithm does not rely on boundaries, it only relies on the `Original Color` of Pixel and `FillColor` of pixel
- The same argument of `4-Way filling` and `8-Way filling` is present here:
	- Use `8-way filling`

## Pseudocode
```
FloodFill(x,y,OriginalColor,FillColor)
{
	if(getPixel(x,y) == OriginalColor)
	{
		// Fill the pixel
		putPixel(x,y,FillColor);
		
		// Top,Right,Down,Left respectively
		FloodFill(x,y+1,OriginalColor,FillColor);
		FloodFill(x+1,y,OriginalColor,FillColor);
		FloodFill(x,y-1,OriginalColor,FillColor);
		FloodFill(x-1,y,OriginalColor,FillColor);
		
		// Diaognals
		FloodFill(x+1,y+1,OriginalColor,FillColor);
		FloodFill(x+1,y-1,OriginalColor,FillColor);
		FloodFill(x-1,y+1,OriginalColor,FillColor);
		FloodFill(x-1,y-1,OriginalColor,FillColor);
	}
}
```
