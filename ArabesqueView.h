

#define INITIAL_CLEAR_PROB	70
#define INITIAL_COPY_PROB	50
#define LINE_SEGMENT_LENGTH	0.08
#define MIN_LINE_WIDTH 		0.005
#define LINE_WIDTH_FACTOR 	7


#import <appkit/View.h>


@interface ArabesqueView:View
	{
	int		r2fx[200],clearProb,copyProb;
	BOOL	erased;
	}


- oneStep;
- (const char *)windowTitle;

- initFrame:(const NXRect *)frameRect;
- drawSelf:(const NXRect *)rects :(int)rectCount;
- sizeTo:(NXCoord)width :(NXCoord)height;


@end
