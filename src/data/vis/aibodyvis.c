import "BodyVis.scr"//BodyVis.cpp
sub AiBodyVis()
{
	use BodyVis();
	BonesStructureInfo()
	{
		SetSpinesCount(0);
		SetNecksCount(0);
		SetForearmsTwistCount(0);
		SetUpperarmsTwistCount(0);
	}
  return 0;
}
