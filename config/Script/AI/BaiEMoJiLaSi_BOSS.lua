Sys.log("load BaiEMoJiLaSi.lua");
--RECEIVER
--ARG_BATTLEID,		//0
--ARG_CASTERPOS,		//1
--ARG_TARGETPOS,		//2
--ARG_POSTABLE,		//3
--ARG_SKILLTABLE		//4

function BaiEMoJiLaSi_pushOrder(RECEIVER, ARG0, ARG1, ARG2, ARG3,ARG4)
	local num = table.maxn(ARG4)
	if num == 0 then
		return;
	end
	
	local myCurHp = Battle.get_prop(ARG0,ARG1,PT_HpCurr);
	local myMaxHp = Battle.get_prop(ARG0,ARG1,PT_HpMax);
	
	if myMaxHp ==  0 then
		return;
	end
	
	local index = math.ceil(math.random(1,num));
	local skillId = ARG4[index];
	if myCurHp/myMaxHp <= 0.1 then
		skillId = 2111;
	end
	
	local TargetPos = random_TargetPos(ARG0,ARG1,ARG2,ARG3,false);
	if skillId == 2 then
		local index1 = math.ceil(math.random(1,100));
		if index1 <= 10 then
			Battle.ai_pushOrder(RECEIVER,ARG1,2);
		else
			Battle.ai_pushOrder(RECEIVER,TargetPos,1);
		end
		return
	end
	Battle.ai_pushOrder(RECEIVER,TargetPos,skillId);
end

function BaiEMoJiLaSi_Born(RECEIVER, ARG0, ARG1, ARG2, ARG3,ARG4)
	local roll = math.ceil(math.random(0,100));
	if roll <= 50 then
		BaiEMoJiLaSi_pushOrder(RECEIVER,ARG0,ARG1,ARG2,ARG3,ARG4);
		local TargetPos = random_TargetPos(ARG0,ARG1,ARG2,ARG3,false);
		monsterpushOrder(RECEIVER,TargetPos);
	else
		local TargetPos = random_TargetPos(ARG0,ARG1,ARG2,ARG3,false);
		monsterpushOrder(RECEIVER,TargetPos);
		BaiEMoJiLaSi_pushOrder(RECEIVER,ARG0,ARG1,ARG2,ARG3,ARG4);
	end
end

function BaiEMoJiLaSi_Update(RECEIVER, ARG0, ARG1, ARG2, ARG3,ARG4)
	local roll = math.ceil(math.random(0,100));
	if roll <= 50 then
		BaiEMoJiLaSi_pushOrder(RECEIVER,ARG0,ARG1,ARG2,ARG3,ARG4);
		local TargetPos = random_TargetPos(ARG0,ARG1,ARG2,ARG3,false);
		monsterpushOrder(RECEIVER,TargetPos);
	else
		local TargetPos = random_TargetPos(ARG0,ARG1,ARG2,ARG3,false);
		monsterpushOrder(RECEIVER,TargetPos);
		BaiEMoJiLaSi_pushOrder(RECEIVER,ARG0,ARG1,ARG2,ARG3,ARG4);
	end
end

function BaiEMoJiLaSi_deadth(RECEIVER, ARG0, ARG1, ARG2, ARG3,ARG4)

end