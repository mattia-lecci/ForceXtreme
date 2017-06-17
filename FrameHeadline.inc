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

[FrameVertivalText]
Meter=String
StringAlign=RIGHT
Text=#HEADLINE#
X=7
Y=24
Angle=-1.5707
FontFace="hooge 05_53"
FontColor=#font2_colour#
FontSize=9
AntiAlias=#AA#
UpdateDivider=3600

[FrameMonitorIcon]
Meter=IMAGE
Path=#SKINSPATH#ForceXtreme\icons\
ImageName=#FRAMEICON#
X=5
Y=5
Greyscale=1
ImageTint=#icon1#
UpdateDivider=3600
