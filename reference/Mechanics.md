# Orientation
    NORTH   is always   UP      (X - 1)
    SOUTH   is always   DOWN    (X + 1)
    EAST    is always   RIGHT   (Y + 1)
    WEST    is always   LEFT    (Y - 1)

    so the rest of the directions are derived from that basic idea.

    NORTHWEST is (X - 1, Y - 1)
    SOUTHWEST is (X + 1, Y - 1)
    NORTHEAST is (X - 1, Y + 1)
    SOUTHEAST is (X + 1, Y + 1)

    Further Advanced directions are derived

    NORTHNORTHWEST  is (X - .5, Y - 1)
    WESTNORTHWEST   is (X - 1, Y - .5)
    SOUTHSOUTHWEST  is (X + .5 Y - 1)
    WESTSOUTHWEST   is (X + 1, Y - .5)

# ASCII Tiles 
		Unused		= ' ',
		Floor		= '.',
		Corridor	= ',',
		Wall		= '#',
		ClosedDoor	= '+',
		OpenDoor	= '-',
		UpStairs	= '<',
		DownStairs	= '>'
		
# Other Tiles 
        Player      = '@'
        Monster     = 'm' or 'M'
                    = 'n' or 'N'
                    = 't' or 'T' 
        Potion      = '!'
        Money       = '$' 
        
		
