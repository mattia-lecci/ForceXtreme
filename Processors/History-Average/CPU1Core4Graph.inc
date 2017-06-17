;----------------------------------------------------------------------------
; Combined Core Usage
;----------------------------------------------------------------------------

[CombinedUsageMeasure]
Measure=Calc
Formula=(CPU1Core1 + CPU1Core2 + CPU1Core3 + CPU1Core4 + CPU1Core5 + CPU1Core6 + CPU1Core7 + CPU1Core8 + CPU1Core9 + CPU1Core10 + CPU1Core11 + CPU1Core12)/#PROCESSORMEASURE#
MinValue=0
MaxValue=100

[CombinedUsageMeasureLine]
Meter=Line
MeasureName=CombinedUsageMeasure
AutoScale=0
X=0r
Y=0r
H=46
W=240
LineCount=1
LineColor=#colour10#
AntiAlias=#AA#

[CombinedUsageLineString]
Meter=STRING
MeasureName=CombinedUsageMeasure
X=0r
Y=0r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
AntiAlias=#AA#
StringEffect=Border
FontEffectColor=000000
Text="Average Core Usage: %1%"