;============================================================================
; Separator
;============================================================================

[Spacer2]
Meter=IMAGE
SolidColor=#colour6#
X=26
Y=18r
H=1
W=(#WIDTH# - 26)
UpdateDivider=3600

;============================================================================
; Graph
;============================================================================

[CPU1TempLine]
Meter=Line
MeasureName=CPUAverageTemp
X=30
Y=5r
H=46
W=240
LineCount=1
LineColor=#colour11#
AntiAlias=#AA#
AutoScale=0
Scale=1
SolidColor=#colour18#