;============================================================================
; ForceXtreme frame setup
;============================================================================

[FrameTopLine]
Meter=IMAGE
SolidColor=#colour6#
X=0
Y=0
H=1
W=#WIDTH#
UpdateDivider=3600

[FrameLeftLine]
Meter=IMAGE
SolidColor=#colour6#
X=0
Y=0
H=#HEIGHT#
W=1
UpdateDivider=3600

[FrameRightLine]
Meter=IMAGE
SolidColor=#colour6#
X=#WIDTH#
Y=0
H=#HEIGHT#
W=1
UpdateDivider=3600

[FrameBottomLine]
Meter=IMAGE
SolidColor=#colour6#
X=0
Y=#HEIGHT#
H=1
W=#WIDTH#
UpdateDivider=3600

[FrameSideBar]
Meter=IMAGE
SolidColor=#colour2#
X=1
Y=1
H=(#HEIGHT# - 1)
W=24
UpdateDivider=3600

[FrameSideBarSeparator]
Meter=IMAGE
SolidColor=#colour3#
X=25
Y=1
H=(#HEIGHT# - 1)
W=1
UpdateDivider=3600

[FrameBody]
Meter=IMAGE
X=26
Y=1
W=(#WIDTH# - 26)
H=(#HEIGHT# - 1)
SolidColor=#colour1#
UpdateDivider=3600

[FrameIcon]
Meter=IMAGE
Path=#SKINSPATH#ForceXtreme\icons\
ImageName=#FRAMEICON#
X=5
Y=5
Greyscale=1
ImageTint=#icon1#
UpdateDivider=3600
