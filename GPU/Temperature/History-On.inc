;============================================================================
; Separator
;============================================================================

[Spacer1]
Meter=IMAGE
SolidColor=#colour6#
X=26
Y=18r
H=1
W=(#WIDTH# - 26)
UpdateDivider=3600

;----------------------------------------------------------------------------
; CPU 1 Temperature History Graph
;----------------------------------------------------------------------------

[CPU1TempLineString]
Meter=STRING
X=30
Y=3r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
AntiAlias=#AA#
StringEffect=Border
FontEffectColor=000000
MeasureName=CPUAverageTemp
Text="CPU Temperature %1°C"

[CPU1TempLine]
Meter=Line
MeasureName=CPUAverageTemp
X=30
Y=03r
H=44
W=240
LineCount=1
LineColor=#colour11#
AntiAlias=#AA#

;============================================================================
; Separator
;============================================================================

[Spacer2]
Meter=IMAGE
SolidColor=#colour6#
X=26
Y=50r
H=1
W=(#WIDTH# - 26)
UpdateDivider=3600
