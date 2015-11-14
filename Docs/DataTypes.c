/*Data Types
--------------------------------

Everything about the actual main program is going to be in the mainWindow cs file. 
Functions for performing the image algorithm and data analysis, etc. goes in other classes

Everything is a member variable. All data is a member variable.

Image Representations
--------------------------------
Bitmap or WriteableBitmap (preferable)
-   IR image – infraredFrame
-   Color image – colorFrame
-   Depth image – depthFrame
-   IR around hand – infraredLeftHand, infraredRightHand
-   Color around hand – colorLeftHand, colorRightHand
-   Depth around hand – depthLeftHand, depthRightHand
-   Various temporary variables for doing the finger recognition algorithm

Data Representations
--------------------------------
Positions represented as:
*/
typedef struct fingerPos {
	float x;
	float y;
	float z;
} fingerPos;

typedef struct handPos {
	fingerPos thumb;
	fingerPos index;
	fingerPos middle;
	fingerPos ring;
	fingerPos pinky;
} handPos;

/*Data on positions represented as:*/
handPos latestLeftHandPos;
handPos latestRightHandPos;

int numSavedPositions = 50;

Queue previousLeftHandPositions;
Queue previousRightHandPositions;

/*Various temporary variables for doing the probabilistic analysis*/