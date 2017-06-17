;----------------------------------------------------------------------------
; Core1 Usage
;----------------------------------------------------------------------------

[CPU1Core1UsageHistogram]
Meter=Histogram
MeasureName=CPU1Core1
X=30
Y=5r
H=46
W=240
LineCount=1
PrimaryColor=255,0,255,150
AntiAlias=#AA#

[CPU1Core1UsageLine]
Meter=Line
MeasureName=CPU1Core1
X=30
Y=0r
H=46
W=240
LineCount=1
LineColor=FF00FF
AntiAlias=#AA#

[CPU1Core1UsageLineString]
Meter=STRING
X=30
Y=0r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
AntiAlias=#AA#
StringEffect=Border
FontEffectColor=000000
MeasureName=CPU1Core1
Text="Core 1 Usage: %1%"
