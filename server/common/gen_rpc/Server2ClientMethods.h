virtual bool pong();
virtual bool errorno(ErrorNo e);
virtual bool teamerrorno(std::string& name, ErrorNo e);
virtual bool reconnection(COM_ReconnectInfo& recInfo);
virtual bool sessionfailed();
virtual bool loginok(std::string& sessionkey, std::vector< COM_SimpleInformation >& players);
virtual bool logoutOk();
virtual bool createPlayerOk(COM_SimpleInformation& player);
virtual bool deletePlayerOk(std::string& name);
virtual bool enterGameOk(COM_PlayerInst& inst);
virtual bool initBabies(std::vector< COM_BabyInst >& insts);
virtual bool initEmployees(std::vector< COM_EmployeeInst >& insts, bool isFlag);
virtual bool initEmpBattleGroup(COM_BattleEmp& bep);
virtual bool initNpc(std::vector< S32 >& npcList);
virtual bool initAchievement(std::vector< COM_Achievement >& actlist);
virtual bool initGather(U32 allnum, std::vector< COM_Gather >& gathers);
virtual bool initcompound(std::vector< U32 >& compounds);
virtual bool addBaby(COM_BabyInst& inst);
virtual bool refreshBaby(COM_BabyInst& inst);
virtual bool delBabyOK(U32 babyInstId);
virtual bool changeBabyNameOK(U32 babyId, std::string& name);
virtual bool remouldBabyOK(U32 instid);
virtual bool intensifyBabyOK(U32 babyid, U32 intensifyLevel);
virtual bool learnSkillOk(COM_Skill& inst);
virtual bool forgetSkillOk(U32 skid);
virtual bool addSkillExp(U32 skid, U32 uExp, ItemUseFlag flag);
virtual bool babyLearnSkillOK(U32 instId, U32 newSkId);
virtual bool skillLevelUp(U32 instId, COM_Skill& inst);
virtual bool joinScene(COM_SceneInfo& info);
virtual bool joinCopySceneOK(S32 secneid);
virtual bool initCopyNums();
virtual bool addToScene(COM_ScenePlayerInformation& inst);
virtual bool delFormScene(S32 instId);
virtual bool move2(S32 instId, COM_FPosition& pos);
virtual bool cantMove();
virtual bool querySimplePlayerInstOk(COM_SimplePlayerInst& player);
virtual bool transfor2(S32 instId, COM_FPosition& pos);
virtual bool openScene(S32 sceneId);
virtual bool autoBattleResult(bool isOk);
virtual bool talked2Npc(S32 npcId);
virtual bool talked2Player(S32 playerId);
virtual bool useItemOk(S32 itemId, S32 stack);
virtual bool syncBattleStatus(S32 playerId, bool inBattle);
virtual bool enterBattleOk(COM_InitBattle& initBattle);
virtual bool exitBattleOk(BattleJudgeType bjt, COM_BattleOverClearing& init);
virtual bool syncOrderOk(U32 uid);
virtual bool syncOrderOkEX();
virtual bool syncOneTurnAction(COM_BattleReport& reports);
virtual bool syncProperties(U32 guid, std::vector< COM_PropValue >& props);
virtual bool receiveChat(COM_ChatInfo& info, COM_ContactInfo& myinfo);
virtual bool requestAudioOk(S32 audioId, std::vector< U8 >& content);
virtual bool publishItemInstRes(COM_ShowItemInstInfo& info, ChatKind type);
virtual bool queryItemInstRes(COM_ShowItemInst& item);
virtual bool publishBabyInstRes(COM_ShowbabyInstInfo& info, ChatKind type);
virtual bool queryBabyInstRes(COM_ShowbabyInst& inst);
virtual bool setNoTalkTime(F32 t);
virtual bool addNpc(std::vector< S32 >& npcList);
virtual bool delNpc(std::vector< S32 >& npcList);
virtual bool setTeamLeader(S32 playerId, bool isLeader);
virtual bool initBag(std::vector< COM_Item >& items);
virtual bool addBagItem(COM_Item& item);
virtual bool delBagItem(U16 slot);
virtual bool updateBagItem(COM_Item& item);
virtual bool depositItemOK(COM_Item& item);
virtual bool getoutItemOK(U16 slot);
virtual bool depositBabyOK(COM_BabyInst& baby);
virtual bool getoutBabyOK(U16 slot);
virtual bool sortItemStorageOK(std::vector< COM_Item >& items);
virtual bool sortBabyStorageOK(std::vector< U32 >& babys);
virtual bool initItemStorage(U16 gridNum, std::vector< COM_Item >& items);
virtual bool initBabyStorage(U16 gridNum, std::vector< COM_BabyInst >& babys);
virtual bool openStorageGrid(StorageType tp, U16 gridNum);
virtual bool delStorageBabyOK(U16 slot);
virtual bool initPlayerEquips(std::vector< COM_Item >& equips);
virtual bool wearEquipmentOk(U32 target, COM_Item& equip);
virtual bool scenePlayerWearEquipment(U32 target, U32 itemId);
virtual bool delEquipmentOk(U32 target, U32 itemInstId);
virtual bool scenePlayerDoffEquipment(U32 target, U32 itemId);
virtual bool sortBagItemOk();
virtual bool jointLobbyOk(std::vector< COM_SimpleTeamInfo >& infos);
virtual bool exitLobbyOk();
virtual bool syncDelLobbyTeam(U32 teamId);
virtual bool syncUpdateLobbyTeam(COM_SimpleTeamInfo& info);
virtual bool syncAddLobbyTeam(COM_SimpleTeamInfo& team);
virtual bool createTeamOk(COM_TeamInfo& team);
virtual bool changeTeamOk(COM_TeamInfo& team);
virtual bool joinTeamOk(COM_TeamInfo& team);
virtual bool addTeamMember(COM_SimplePlayerInst& info);
virtual bool delTeamMember(S32 instId);
virtual bool changeTeamLeaderOk(S32 uuid);
virtual bool exitTeamOk(bool iskick);
virtual bool updateTeam(COM_TeamInfo& team);
virtual bool joinTeamRoomOK(COM_TeamInfo& team);
virtual bool inviteJoinTeam(U32 teamId, std::string& name);
virtual bool syncTeamDirtyProp(S32 guid, std::vector< COM_PropValue >& props);
virtual bool leaveTeamOk(S32 playerId);
virtual bool backTeamOK(S32 playerId);
virtual bool teamCallMemberBack();
virtual bool refuseBackTeamOk(S32 playerId);
virtual bool requestJoinTeamTranspond(std::string& reqName);
virtual bool drawLotteryBoxRep(std::vector< COM_Item >& items);
virtual bool addEmployee(COM_EmployeeInst& employee);
virtual bool battleEmployee(S32 empId, EmployeesBattleGroup group, bool forbattle);
virtual bool changeEmpBattleGroupOK(EmployeesBattleGroup group);
virtual bool evolveOK(S32 guid, QualityColor qc);
virtual bool upStarOK(S32 guid, S32 star, COM_Skill& sk);
virtual bool delEmployeeOK(std::vector< U32 >& instids);
virtual bool sycnEmployeeSoul(S32 guid, U32 soulNum);
virtual bool initQuest(std::vector< COM_QuestInst >& qlist, std::vector< S32 >& clist);
virtual bool acceptQuestOk(COM_QuestInst& inst);
virtual bool submitQuestOk(S32 questId);
virtual bool giveupQuestOk(S32 questId);
virtual bool updateQuestInst(COM_QuestInst& inst);
virtual bool requestContactInfoOk(COM_ContactInfo& contact);
virtual bool addFriendOK(COM_ContactInfo& inst);
virtual bool delFriendOK(U32 instId);
virtual bool addBlacklistOK(COM_ContactInfo& inst);
virtual bool delBlacklistOK(U32 instId);
virtual bool findFriendFail();
virtual bool referrFriendOK(std::vector< COM_ContactInfo >& insts);
virtual bool requestFriendListOK(std::vector< COM_ContactInfo >& insts);
virtual bool lotteryOk(S32 lotteryId, std::vector< COM_DropItem >& dropItem);
virtual bool openGatherOK(COM_Gather& gather);
virtual bool miningOk(std::vector< COM_DropItem >& items, COM_Gather& gather, U32 gatherNum);
virtual bool openCompound(U32 compoundId);
virtual bool compoundItemOk(COM_Item& item);
virtual bool openBagGridOk(S32 num);
virtual bool requestChallengeOK(bool isOK);
virtual bool requestMySelfJJCDataOK(COM_EndlessStair& info);
virtual bool requestRivalOK(std::vector< COM_EndlessStair >& infos);
virtual bool rivalTimeOK();
virtual bool checkMsgOK(COM_SimplePlayerInst& inst);
virtual bool requestMyAllbattleMsgOK(std::vector< COM_JJCBattleMsg >& infos);
virtual bool myBattleMsgOK(COM_JJCBattleMsg& info);
virtual bool requestJJCRankOK(U32 myRank, std::vector< COM_EndlessStair >& infos);
virtual bool requestLevelRankOK(U32 myRank, std::vector< COM_ContactInfo >& infos);
virtual bool requestBabyRankOK(U32 myRank, std::vector< COM_BabyRankData >& infos);
virtual bool requestEmpRankOK(U32 myRank, std::vector< COM_EmployeeRankData >& infos);
virtual bool requestPlayerFFRankOK(U32 myRank, std::vector< COM_ContactInfo >& infos);
virtual bool queryOnlinePlayerOK(bool isOnline);
virtual bool queryPlayerOK(COM_SimplePlayerInst& inst);
virtual bool queryBabyOK(COM_BabyInst& inst);
virtual bool queryEmployeeOK(COM_EmployeeInst& inst);
virtual bool initGuide(U32 guideMask);
virtual bool buyShopItemOk(S32 id);
virtual bool addPlayerTitle(S32 title);
virtual bool delPlayerTitle(S32 title);
virtual bool requestOpenBuyBox(F32 greenTime, F32 blueTime, S32 greenFreeNum);
virtual bool requestGreenBoxTimeOk();
virtual bool requestBlueBoxTimeOk();
virtual bool updateAchievementinfo(COM_Achievement& achs);
virtual bool syncOpenSystemFlag(U64 flag);
virtual bool requestActivityRewardOK(U32 ar);
virtual bool syncActivity(COM_ActivityTable& table);
virtual bool updateActivityStatus(ActivityType type, bool open);
virtual bool updateActivityCounter(ActivityType type, S32 counter, S32 reward);
virtual bool syncExam(COM_Exam& exam);
virtual bool syncExamAnswer(COM_Answer& answer);
virtual bool petActivityNoNum(std::string& name);
virtual bool syncHundredInfo(COM_HundredBattle& hb);
virtual bool initSignUp(std::vector< S32 >& info, S32 process, bool sign7, bool sign14, bool sign28);
virtual bool signUp(bool flag);
virtual bool requestSignupRewardOk7();
virtual bool requestSignupRewardOk14();
virtual bool requestSignupRewardOk28();
virtual bool sycnDoubleExpTime(bool isFlag, F32 times);
virtual bool sycnStates(std::vector< COM_State >& states);
virtual bool requestpvprankOK(std::vector< COM_ContactInfo >& infos);
virtual bool syncMyJJCTeamMember();
virtual bool startMatchingOK();
virtual bool stopMatchingOK(F32 times);
virtual bool updatePvpJJCinfo(COM_PlayerVsPlayer& info);
virtual bool exitPvpJJCOk();
virtual bool syncEnemyPvpJJCPlayerInfo(COM_SimpleInformation& info);
virtual bool syncEnemyPvpJJCTeamInfo(std::vector< COM_SimpleInformation >& infos, U32 teamID_);
virtual bool openWarriorchooseUI();
virtual bool warriorStartOK();
virtual bool warriorStopOK();
virtual bool syncWarriorEnemyTeamInfo(std::vector< COM_SimpleInformation >& infos, U32 teamID_);
virtual bool appendMail(std::vector< COM_Mail >& mails);
virtual bool delMail(S32 mailId);
virtual bool updateMailOk(COM_Mail& mail);
virtual bool boardcastNotice(std::string& content, bool isGm);
virtual bool createGuildOK();
virtual bool delGuildOK();
virtual bool leaveGuildOk(std::string& who, bool isKick);
virtual bool initGuildData(COM_Guild& guild);
virtual bool initGuildMemberList(std::vector< COM_GuildMember >& member);
virtual bool modifyGuildMemberList(COM_GuildMember& member, ModifyListFlag flag);
virtual bool modifyGuildList(COM_GuildViewerData& data, ModifyListFlag flag);
virtual bool queryGuildListResult(S16 page, S16 pageNum, std::vector< COM_GuildViewerData >& guildList);
virtual bool inviteGuild(std::string& sendName, std::string& guildName);
virtual bool updateGuildShopItems(std::vector< COM_GuildShopItem >& items);
virtual bool updateGuildBuilding(GuildBuildingType type, COM_GuildBuilding& building);
virtual bool updateGuildMyMember(COM_GuildMember& member);
virtual bool levelupGuildSkillOk(COM_Skill& skInst);
virtual bool presentGuildItemOk(S32 val);
virtual bool progenitusAddExpOk(COM_GuildProgen& mInst);
virtual bool setProgenitusPositionOk(std::vector< S32 >& positions);
virtual bool updateGuildFundz(S32 val);
virtual bool updateGuildMemberContribution(S32 val);
virtual bool openGuildBattle(std::string& otherName, S32 playerNum, S32 level, bool isLeft, S32 lstime);
virtual bool startGuildBattle(std::string& otherName, S32 otherCon, S32 selfCon);
virtual bool closeGuildBattle(bool isWinner);
virtual bool syncGuildBattleWinCount(S32 myWin, S32 otherWin);
virtual bool initMySelling(std::vector< COM_SellItem >& items);
virtual bool initMySelled(std::vector< COM_SelledItem >& items);
virtual bool fetchSellingOk(std::vector< COM_SellItem >& items, S32 total);
virtual bool fetchSellingOk2(std::vector< COM_SellItem >& items, S32 total);
virtual bool sellingOk(COM_SellItem& item);
virtual bool selledOk(COM_SelledItem& item);
virtual bool unsellingOk(S32 sellid);
virtual bool redemptionSpreeOk();
virtual bool insertState(COM_State& st);
virtual bool updattState(COM_State& st);
virtual bool removeState(U32 stid);
virtual bool requestFixItemOk(COM_Item& item);
virtual bool makeDebirsItemOK();
virtual bool updateMagicItem(S32 level, S32 exp);
virtual bool changeMagicJobOk(JobType job);
virtual bool magicItemTupoOk(S32 level);
virtual bool zhuanpanOK(std::vector< U32 >& pond);
virtual bool updateZhuanpanNotice(COM_Zhuanpan& zhuanp);
virtual bool sycnZhuanpanData(COM_ZhuanpanData& data);
virtual bool copynonum(std::string& name);
virtual bool sceneFilterOk(std::vector< SceneFilterType >& sfType);
virtual bool wishingOK();
virtual bool shareWishOK(COM_Wish& wish);
virtual bool leaderCloseDialogOk();
virtual bool startOnlineTime();
virtual bool requestOnlineTimeRewardOK(U32 index);
virtual bool sycnVipflag(bool flag);
virtual bool buyFundOK(bool flag);
virtual bool requestFundRewardOK(U32 level);
virtual bool firstRechargeOK(bool isFlag);
virtual bool firstRechargeGiftOK(bool isFlag);
virtual bool agencyActivity(ADType type, bool isFlag);
virtual bool updateFestival(COM_ADLoginTotal& festival);
virtual bool updateSelfRecharge(COM_ADChargeTotal& val);
virtual bool updateSysRecharge(COM_ADChargeTotal& val);
virtual bool updateSelfDiscountStore(COM_ADDiscountStore& val);
virtual bool updateSysDiscountStore(COM_ADDiscountStore& val);
virtual bool updateSelfOnceRecharge(COM_ADChargeEvery& val);
virtual bool updateSysOnceRecharge(COM_ADChargeEvery& val);
virtual bool openCardOK(COM_ADCardsContent& data);
virtual bool resetCardOK();
virtual bool sycnHotRole(COM_ADHotRole& data);
virtual bool hotRoleBuyOk(U16 buyNum);
virtual bool updateSevenday(COM_Sevenday& data);
virtual bool updateEmployeeActivity(COM_ADEmployeeTotal& data);
virtual bool updateMinGiftActivity(COM_ADGiftBag& data);
virtual bool updateIntegralShop(COM_IntegralData& data);
virtual bool updateShowBaby(U32 playerId, U32 showBabyTableId, std::string& showBabyName);
virtual bool updateMySelfRecharge(COM_ADChargeTotal& val);
virtual bool verificationSMSOk(std::string& phoneNumber);
virtual bool requestLevelGiftOK(S32 level);
virtual bool sycnConvertExp(S32 val);
virtual bool wearFuwenOk(COM_Item& inst);
virtual bool takeoffFuwenOk(S32 slot);
virtual bool compFuwenOk();
virtual bool requestEmployeeQuestOk(std::vector< COM_EmployeeQuestInst >& questList);
virtual bool acceptEmployeeQuestOk(COM_EmployeeQuestInst& inst);
virtual bool submitEmployeeQuestOk(S32 questId, bool isSuccess);
virtual bool sycnCrystal(COM_CrystalData& data);
virtual bool crystalUpLeveResult(bool isOK);
virtual bool resetCrystalPropOK();
virtual bool sycnCourseGift(std::vector< COM_CourseGift >& data);
virtual bool orderOk(std::string& orderId, S32 shopId);
virtual bool updateRandSubmitQuestCount(S32 submitCount);
virtual bool updateTeamMember(S32 playerId, bool isMember);