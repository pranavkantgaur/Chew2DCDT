/* 
Algorithm:
Input: PSLG G, angle threshold alpha*
Steps:
Compute Constrained Delaunay triangulation of G, T
While T contains a poor quality triangle t, do:
	if t enchroaches a segment S:
		Remove the circumcentres from diameteral disk of S
		Split S by adding its midpoint to T
	else
		Insert the circumcenter of t into T
	endif
endwhile
*/
