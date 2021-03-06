#include "types.hpp"

string_map stat_cost_map;

void initialise_stat_cost_map()
{
	stat_cost_map["strength"] = "Strength";
	stat_cost_map["energy"] = "Energy";
	stat_cost_map["dexterity"] = "Dexterity";
	stat_cost_map["vitality"] = "Vitality";
	stat_cost_map["statpts"] = "All Attributes";
	stat_cost_map["newskills"] = "New Skills";
	stat_cost_map["hitpoints"] = "Life";
	stat_cost_map["maxhp"] = "Maximum Life";
	stat_cost_map["mana"] = "Mana";
	stat_cost_map["maxmana"] = "Maximum Mana";
	stat_cost_map["stamina"] = "Stamina";
	stat_cost_map["maxstamina"] = "Maximum Stamina";
	stat_cost_map["level"] = "Level";
	stat_cost_map["experience"] = "Experience";
	stat_cost_map["gold"] = "Gold"; //?
	stat_cost_map["goldbank"] = "Bank"; //?
	stat_cost_map["item_armor_percent"] = "Enhanced Defense";
	stat_cost_map["item_maxdamage_percent"] = "Enhanced Maximum Damage";
	stat_cost_map["item_mindamage_percent"] = "Enhanced Minimum Damage";
	stat_cost_map["tohit"] = "Attack Rating"; //not sure
	stat_cost_map["toblock"] = "Increased Blocking"; //?
	stat_cost_map["mindamage"] = "Minimum Damage";
	stat_cost_map["maxdamage"] = "Maximum Damage";
	stat_cost_map["secondary_mindamage"] = "Secondary Minimum Damage";
	stat_cost_map["secondary_maxdamage"] = "Secondary Maximum Damage";
	stat_cost_map["damagepercent"] = "Enhanced Damage";
	stat_cost_map["manarecovery"] = "Mana Recovery";
	stat_cost_map["manarecoverybonus"] = "Mana Recovery Bonus";
	stat_cost_map["staminarecoverybonus"] = "Stamina Recovery Bonus";
	stat_cost_map["lastexp"] = "Last Experience"; //?
	stat_cost_map["nextexp"] = "Next Experience"; //?
	stat_cost_map["armorclass"] = "Defense";
	stat_cost_map["armorclass_vs_missile"] = "Defense vs. Missiles";
	stat_cost_map["armorclass_vs_hth"] = "Defense vs. Melee";
	stat_cost_map["normal_damage_reduction"] = "Damage Reduction";
	stat_cost_map["magic_damage_reduction"] = "Magical Damage Reduction";
	stat_cost_map["damageresist"] = "Damage Reduction (Percent)";
	stat_cost_map["magicresist"] = "Magical Damage Reduction (Percent)";
	stat_cost_map["maxmagicresist"] = "Maximum Magical Damage Reduction (Percent)";
	stat_cost_map["fireresist"] = "Fire Resistance";
	stat_cost_map["maxfireresist"] = "Maximum Fire Resistance";
	stat_cost_map["lightresist"] = "Lightning Resistance";
	stat_cost_map["maxlightresist"] = "Maximum Lightning Resistance";
	stat_cost_map["coldresist"] = "Cold Resistance";
	stat_cost_map["maxcoldresist"] = "Maximum Cold Resistance";
	stat_cost_map["poisonresist"] = "Poison Resistance";
	stat_cost_map["maxpoisonresist"] = "Maximum Poison Resistance";
	stat_cost_map["damageaura"] = "Damage Aura";
	stat_cost_map["firemindam"] = "Minimum Fire Damage";
	stat_cost_map["firemaxdam"] = "Maximum Fire Damage";
	stat_cost_map["lightmindam"] = "Minimum Lightning Damage";
	stat_cost_map["lightmaxdam"] = "Maximum Lightning Damage";
	stat_cost_map["magicmindam"] = "Minimum Magical Damage";
	stat_cost_map["magicmaxdam"] = "Maximum Magical Damage";
	stat_cost_map["coldmindam"] = "Minimum Cold Damage";
	stat_cost_map["coldmaxdam"] = "Maximum Cold Damage";
	stat_cost_map["coldlength"] = "Cold Damage Length";
	stat_cost_map["poisonmindam"] = "Minimum Poison Damage";
	stat_cost_map["poisonmaxdam"] = "Maximum Poison Damage";
	stat_cost_map["poisonlength"] = "Poison Damage length";
	stat_cost_map["lifedrainmindam"] = "Minimum Life Stolen Per Hit";
	stat_cost_map["lifedrainmaxdam"] = "Maximum Life Stolen Per Hit";
	stat_cost_map["manadrainmindam"] = "Minimum Mana Stolen Per Hit";
	stat_cost_map["manadrainmaxdam"] = "Maximum Mana Stolen Per Hit";
	stat_cost_map["stamdrainmindam"] = "Minimum Stamina Drain";
	stat_cost_map["stamdrainmaxdam"] = "Maximum Stamina Drain";
	stat_cost_map["stunlength"] = "Stun Length";
	stat_cost_map["velocitypercent"] = "Velocity Percent"; //?
	stat_cost_map["attackrate"] = "Attack Rate";
	stat_cost_map["other_animrate"] = "Other Animation Rate"; //?
	stat_cost_map["quantity"] = "Quantity";
	stat_cost_map["value"] = "Value";
	stat_cost_map["durability"] = "Durability";
	stat_cost_map["maxdurability"] = "Maximum Durability";
	stat_cost_map["hpregen"] = "Replenish Life";
	stat_cost_map["item_maxdurability_percent"] = "Enhanced Maximum Durability";
	stat_cost_map["item_maxhp_percent"] = "Enhanced Life";
	stat_cost_map["item_maxmana_percent"] = "Enhanced Mana";
	stat_cost_map["item_attackertakesdamage"] = "Attacker Takes Damage";
	stat_cost_map["item_goldbonus"] = "Extra Gold";
	stat_cost_map["item_magicbonus"] = "Better Chance Of Getting Magic Item";
	stat_cost_map["item_knockback"] = "Knockback";
	stat_cost_map["item_timeduration"] = "Time Duration";
	stat_cost_map["item_addclassskills"] = "Class Skills";
	stat_cost_map["unsentparam1"] = "Unsent Parameter"; //?
	stat_cost_map["item_addexperience"] = "Add Experience";
	stat_cost_map["item_healafterkill"] = "Life After Each Kill";
	stat_cost_map["item_reducedprices"] = "Reduce Vendor Prices";
	stat_cost_map["item_doubleherbduration"] = "Double Herb Duration";
	stat_cost_map["item_lightradius"] = "Light Radius";
	stat_cost_map["item_lightcolor"] = "Light Colour";
	stat_cost_map["item_req_percent"] = "Reduced Requirements";
	stat_cost_map["item_levelreq"] = "Reduced Level Requirement";
	stat_cost_map["item_fasterattackrate"] = "Increased Attack Speed";
	stat_cost_map["item_levelreqpct"] = "Reduced Level Requirement (Percent)";
	stat_cost_map["lastblockframe"] = "Last Block Frame"; //?
	stat_cost_map["item_fastermovevelocity"] = "Faster Run Walk";
	stat_cost_map["item_nonclassskill"] = "Non Class Skill"; //?
	stat_cost_map["state"] = "State"; //?
	stat_cost_map["item_fastergethitrate"] = "Faster Hit Recovery";
	stat_cost_map["monster_playercount"] = "Monster Player Count"; //?
	stat_cost_map["skill_poison_override_length"] = "Skill Poison Override Length"; //?
	stat_cost_map["item_fasterblockrate"] = "Faster Block Rate";
	stat_cost_map["skill_bypass_undead"] = "Skill Bypass Undead"; //?
	stat_cost_map["skill_bypass_demons"] = "Skill Bypass Demons"; //?
	stat_cost_map["item_fastercastrate"] = "Faster Cast Rate";
	stat_cost_map["skill_bypass_beasts"] = "Skill Bypass Beasts"; //?
	stat_cost_map["item_singleskill"] = "Single Skill";
	stat_cost_map["item_restinpeace"] = "Slain Monsters Rest In Peace";
	stat_cost_map["curse_resistance"] = "Curse Resistance"; //?
	stat_cost_map["item_poisonlengthresist"] = "Poison Length Reduction";
	stat_cost_map["item_normaldamage"] = "Adds Damage";
	stat_cost_map["item_howl"] = "Hit Causes Monster To Flee";
	stat_cost_map["item_stupidity"] = "Hit Blinds Target";
	stat_cost_map["item_damagetomana"] = "Damage To Mana";
	stat_cost_map["item_ignoretargetac"] = "Ignore Target's Defense";
	stat_cost_map["item_fractionaltargetac"] = "Reduce Target's Defense"; //?
	stat_cost_map["item_preventheal"] = "Prevent Monster Heal";
	stat_cost_map["item_halffreezeduration"] = "Half Freeze Duration";
	stat_cost_map["item_tohit_percent"] = "To Hit Percent"; //?
	stat_cost_map["item_damagetargetac"] = "Monster Defense Reduction per Hit";
	stat_cost_map["item_demondamage_percent"] = "Damage To Demons";
	stat_cost_map["item_undeaddamage_percent"] = "Damage To Undead";
	stat_cost_map["item_demon_tohit"] = "Attack Rating Against Demons";
	stat_cost_map["item_undead_tohit"] = "Attack Rating Against Undead";
	stat_cost_map["item_throwable"] = "Throwable";
	stat_cost_map["item_elemskill"] = "Elemental Skills";
	stat_cost_map["item_allskills"] = "All Skills";
	stat_cost_map["item_attackertakeslightdamage"] = "Attacker Takes Lightning Damage";
	stat_cost_map["ironmaiden_level"] = "Iron Maiden Level";
	stat_cost_map["lifetap_level"] = "Lifetap Level";
	stat_cost_map["thorns_percent"] = "Thorns Percent";
	stat_cost_map["bonearmor"] = "Bone Armor";
	stat_cost_map["bonearmormax"] = "Maximum Bone Armor";
	stat_cost_map["item_freeze"] = "Freezes Target";
	stat_cost_map["item_openwounds"] = "Open Wounds";
	stat_cost_map["item_crushingblow"] = "Crushing Blow";
	stat_cost_map["item_kickdamage"] = "Kick Damage";
	stat_cost_map["item_manaafterkill"] = "Mana After Each Kill";
	stat_cost_map["item_healafterdemonkill"] = "Life After Each Demon Kill";
	stat_cost_map["item_extrablood"] = "Extra Blood"; //?
	stat_cost_map["item_deadlystrike"] = "Deadly Strike";
	stat_cost_map["item_absorbfire_percent"] = "Fire Absorption (Percent)";
	stat_cost_map["item_absorbfire"] = "Fire Absorption";
	stat_cost_map["item_absorblight_percent"] = "Lightning Absorption (Percent)";
	stat_cost_map["item_absorblight"] = "Lightning Absorption";
	stat_cost_map["item_absorbmagic_percent"] = "Magic Absorption (Percent)";
	stat_cost_map["item_absorbmagic"] = "Magic Absorption";
	stat_cost_map["item_absorbcold_percent"] = "Cold Absorption (Percent)";
	stat_cost_map["item_absorbcold"] = "Cold Absorption";
	stat_cost_map["item_slow"] = "Slows Down Enemies";
	stat_cost_map["item_aura"] = "Aura";
	stat_cost_map["item_indesctructible"] = "Indestructible";
	stat_cost_map["item_cannotbefrozen"] = "Cannot Be Frozen";
	stat_cost_map["item_staminadrainpct"] = "Stamina Drain (Percent)";
	stat_cost_map["item_reanimate"] = "Reanimate";
	stat_cost_map["item_pierce"] = "Piercing Attack";
	stat_cost_map["item_magicarrow"] = "Fires Magic Arrows";
	stat_cost_map["item_explosivearrow"] = "Fire Explosive Arrows";
	stat_cost_map["item_throw_mindamage"] = "Minimum Throwing Damage";
	stat_cost_map["item_throw_maxdamage"] = "Maximum Throwing Damage";
	stat_cost_map["skill_handofathena"] = "Skill Hand Of Athena"; //?
	stat_cost_map["skill_staminapercent"] = "Skill Stamina (Percent)"; //?
	stat_cost_map["skill_passive_staminapercent"] = "Skill Passive Stamina (Percent)"; //?
	stat_cost_map["skill_concentration"] = "Concentration";
	stat_cost_map["skill_enchant"] = "Enchant";
	stat_cost_map["skill_pierce"] = "Pierce";
	stat_cost_map["skill_conviction"] = "Conviction";
	stat_cost_map["skill_chillingarmor"] = "Chilling Armor";
	stat_cost_map["skill_frenzy"] = "Frenzy";
	stat_cost_map["skill_decrepify"] = "Decrepify";
	stat_cost_map["skill_armor_percent"] = "Skill Armor Percent"; //?
	stat_cost_map["alignment"] = "Alignment"; //?
	stat_cost_map["target0"] = "Target 0"; //?
	stat_cost_map["target1"] = "Target 1"; //?
	stat_cost_map["goldlost"] = "Gold Lost"; //?
	stat_cost_map["conversion_level"] = "Conversion Level";
	stat_cost_map["conversion_maxhp"] = "Conversion Maximum Life";
	stat_cost_map["unit_dooverlay"] = "Unit Do Overlay"; //?
	stat_cost_map["attack_vs_montype"] = "Attack Rating Against Monster Type"; //?
	stat_cost_map["damage_vs_montype"] = "Damage To Monster Type"; //?
	stat_cost_map["fade"] = "Fade";
	stat_cost_map["armor_override_percent"] = "Armor Override Percent"; //?
	stat_cost_map["unused183"] = "Unused 183";
	stat_cost_map["unused184"] = "Unused 184";
	stat_cost_map["unused185"] = "Unused 185";
	stat_cost_map["unused186"] = "Unused 186";
	stat_cost_map["unused187"] = "Unused 187";
	stat_cost_map["item_addskill_tab"] = "Skill Tab";
	stat_cost_map["unused189"] = "Unused 189";
	stat_cost_map["unused190"] = "Unused 190";
	stat_cost_map["unused191"] = "Unused 191";
	stat_cost_map["unused192"] = "Unused 192";
	stat_cost_map["unused193"] = "Unused 193";
	stat_cost_map["item_numsockets"] = "Socket Count";
	stat_cost_map["item_skillonattack"] = "Skill On Striking";
	stat_cost_map["item_skillonkill"] = "Skill On Kill";
	stat_cost_map["item_skillondeath"] = "Skill On Death";
	stat_cost_map["item_skillonhit"] = "Skill On Hit";
	stat_cost_map["item_skillonlevelup"] = "Skill On Level Up";
	stat_cost_map["unused200"] = "Unused 200";
	stat_cost_map["item_skillongethit"] = "Skill When Struck";
	stat_cost_map["unused202"] = "Unused 202";
	stat_cost_map["unused203"] = "Unused 203";
	stat_cost_map["item_charged_skill"] = "Charged";
	stat_cost_map["unused204"] = "Unused 204";
	stat_cost_map["unused205"] = "Unused 205";
	stat_cost_map["unused206"] = "Unused 206";
	stat_cost_map["unused207"] = "Unused 207";
	stat_cost_map["unused208"] = "Unused 208";
	stat_cost_map["unused209"] = "Unused 209";
	stat_cost_map["unused210"] = "Unused 210";
	stat_cost_map["unused211"] = "Unused 211";
	stat_cost_map["unused212"] = "Unused 212";
	stat_cost_map["item_armor_perlevel"] = "Defense Per Level";
	stat_cost_map["item_armorpercent_perlevel"] = "Enhanced Defense Per Level";
	stat_cost_map["item_hp_perlevel"] = "Life Per Level";
	stat_cost_map["item_mana_perlevel"] = "Mana Per Level";
	stat_cost_map["item_maxdamage_perlevel"] = "Maximum Damage Per Level";
	stat_cost_map["item_maxdamage_percent_perlevel"] = "Maximum Enhanced Damage Per Level";
	stat_cost_map["item_strength_perlevel"] = "Strength Per Level";
	stat_cost_map["item_dexterity_perlevel"] = "Dexterity Per Level";
	stat_cost_map["item_energy_perlevel"] = "Energy Per Level";
	stat_cost_map["item_vitality_perlevel"] = "Vitality Per Level";
	stat_cost_map["item_tohit_perlevel"] = "Attack Rating Per Level";
	stat_cost_map["item_tohitpercent_perlevel"] = "Bonus To Attack Rating Per Level";
	stat_cost_map["item_cold_damagemax_perlevel"] = "Maximum Cold Damage Per Level";
	stat_cost_map["item_fire_damagemax_perlevel"] = "Maximum Fire Damage Per Level";
	stat_cost_map["item_ltng_damagemax_perlevel"] = "Maximum Lightning Damage Per Level";
	stat_cost_map["item_pois_damagemax_perlevel"] = "Maximum Poison Damage Per Level";
	stat_cost_map["item_resist_cold_perlevel"] = "Cold Resistance Per Level";
	stat_cost_map["item_resist_fire_perlevel"] = "Fire Resistance Per Level";
	stat_cost_map["item_resist_ltng_perlevel"] = "Lightning Resistance Per Level";
	stat_cost_map["item_resist_pois_perlevel"] = "Poison Resistance Per Level";
	stat_cost_map["item_absorb_cold_perlevel"] = "Cold Absorption Per Level";
	stat_cost_map["item_absorb_fire_perlevel"] = "Fire Absorption Per Level";
	stat_cost_map["item_absorb_ltng_perlevel"] = "Lightning Absorption Per Level";
	stat_cost_map["item_absorb_pois_perlevel"] = "Poison Absorption Per Level";
	stat_cost_map["item_thorns_perlevel"] = "Thorns Per Level";
	stat_cost_map["item_find_gold_perlevel"] = "Extra Gold Per Level";
	stat_cost_map["item_find_magic_perlevel"] = "Better Chance Of Getting Magic Item Per Level";
	stat_cost_map["item_regenstamina_perlevel"] = "Stamina Regeneration Per Level";
	stat_cost_map["item_stamina_perlevel"] = "Stamina Per Level";
	stat_cost_map["item_damage_demon_perlevel"] = "Damage To Demons Per Level";
	stat_cost_map["item_damage_undead_perlevel"] = "Damage To Undead Per Level";
	stat_cost_map["item_tohit_demon_perlevel"] = "Attack Rating Against Demons Per Level";
	stat_cost_map["item_tohit_undead_perlevel"] = "Attack Rating Against Undead Per Level";
	stat_cost_map["item_crushingblow_perlevel"] = "Crushing Blow Per Level";
	stat_cost_map["item_openwounds_perlevel"] = "Open Wounds Per Level";
	stat_cost_map["item_kick_damage_perlevel"] = "Kick Damage Per Level";
	stat_cost_map["item_deadlystrike_perlevel"] = "Deadly Strike Per Level";
	stat_cost_map["item_find_gems_perlevel"] = "Find Gems Per Level"; //?
	stat_cost_map["item_replenish_durability"] = "Repairs Durability";
	stat_cost_map["item_replenish_quantity"] = "Replenishes Quantity";
	stat_cost_map["item_extra_stack"] = "Increased Stack Size";
	stat_cost_map["item_find_item"] = "Find Item"; //?

	//unused damage types I think:

	stat_cost_map["item_slash_damage"] = "Slash Damage"; //?
	stat_cost_map["item_slash_damage_percent"] = "Slash Damage (Percent)"; //?
	stat_cost_map["item_crush_damage"] = "Crush Damage"; //?
	stat_cost_map["item_crush_damage_percent"] = "Crush Damage (Percent)"; //?
	stat_cost_map["item_thrust_damage"] = "Thrust Damage"; //?
	stat_cost_map["item_thrust_damage_percent"] = "Thrust Damage (Percent)"; //?
	stat_cost_map["item_absorb_slash"] = "Slash Damage Absorption"; //?
	stat_cost_map["item_absorb_crush"] = "Crush Damage Absorption"; //?
	stat_cost_map["item_absorb_thrust"] = "Thrust Damage Absorption"; //?
	stat_cost_map["item_absorb_slash_percent"] = "Slash Damage Absorption (Percent)"; //?
	stat_cost_map["item_absorb_crush_percent"] = "Crush Damage Absorption (Percent)"; //?
	stat_cost_map["item_absorb_thrust_percent"] = "Thrust Damage Absorption (Percent)"; //?

	//all per time stuff is unused I think:

	stat_cost_map["item_armor_bytime"] = "Defense Per Time"; //?
	stat_cost_map["item_armorpercent_bytime"] = "Enhanced Defense Per Time"; //?
	stat_cost_map["item_hp_bytime"] = "Life Per Time"; //?
	stat_cost_map["item_mana_bytime"] = "Mana Per Time"; //?
	stat_cost_map["item_maxdamage_bytime"] = "Maximum Damage Per Time";
	stat_cost_map["item_maxdamage_percent_bytime"] = "Maximum Enhanced Damage Per Time";
	stat_cost_map["item_strength_bytime"] = "Strength Per Time";
	stat_cost_map["item_dexterity_bytime"] = "Dexterity Per Time";
	stat_cost_map["item_energy_bytime"] = "Energy Per Time";
	stat_cost_map["item_vitality_bytime"] = "Vitality Per Time";
	stat_cost_map["item_tohit_bytime"] = "Attack Rating Per Time";
	stat_cost_map["item_tohitpercent_bytime"] = "Chance To Hit Per Time";
	stat_cost_map["item_cold_damagemax_bytime"] = "Maximum Cold Damage Per Time";
	stat_cost_map["item_fire_damagemax_bytime"] = "Maximum Fire Damage Per Time";
	stat_cost_map["item_ltng_damagemax_bytime"] = "Maximum Lightning Damage Per Time";
	stat_cost_map["item_pois_damagemax_bytime"] = "Maximum Damage Per Poison";
	stat_cost_map["item_resist_cold_bytime"] = "Cold Resistance Per Time";
	stat_cost_map["item_resist_fire_bytime"] = "Fire Resistance Per Time";
	stat_cost_map["item_resist_ltng_bytime"] = "Lightning Resistance Per Time";
	stat_cost_map["item_resist_pois_bytime"] = "Poison Resistance Per Time";
	stat_cost_map["item_absorb_cold_bytime"] = "Cold Absorption Per Time";
	stat_cost_map["item_absorb_fire_bytime"] = "Fire Absorption Per Time";
	stat_cost_map["item_absorb_ltng_bytime"] = "Lightning Absorption Per Time";
	stat_cost_map["item_absorb_pois_bytime"] = "Poison Absorption Per Time";
	stat_cost_map["item_find_gold_bytime"] = "Extra Gold Per Time";
	stat_cost_map["item_find_magic_bytime"] = "Better Chance Of Getting magic Item Per Time";
	stat_cost_map["item_regenstamina_bytime"] = "Regenerate Stamina Per Time";
	stat_cost_map["item_stamina_bytime"] = "Stamina Per Time";
	stat_cost_map["item_damage_demon_bytime"] = "Damage To Demons Per Time";
	stat_cost_map["item_damage_undead_bytime"] = "Damage To Undead Per Time";
	stat_cost_map["item_tohit_demon_bytime"] = "Attack Rating Against Demons Per Time";
	stat_cost_map["item_tohit_undead_bytime"] = "Attack Rating Against Undead Per Time";
	stat_cost_map["item_crushingblow_bytime"] = "Crushing Blow Per Time";
	stat_cost_map["item_openwounds_bytime"] = "Open Wounds Per Time";
	stat_cost_map["item_kick_damage_bytime"] = "Kick Damage Per Time";
	stat_cost_map["item_deadlystrike_bytime"] = "Deadly Strike Per Time";
	stat_cost_map["item_find_gems_bytime"] = "Find Gems Per Time";

	stat_cost_map["item_pierce_cold"] = "Enemy Cold Resistance Reduction";
	stat_cost_map["item_pierce_fire"] = "Enemy Fire Resistance Reduction";
	stat_cost_map["item_pierce_ltng"] = "Enemy Lightning Resistance Reduction";
	stat_cost_map["item_pierce_pois"] = "Enemy Poison Resistance Reduction";
	stat_cost_map["item_damage_vs_monster"] = "Damage vs. Monsters";
	stat_cost_map["item_damage_percent_vs_monster"] = "Enhanced Damage vs. Monsters";
	stat_cost_map["item_tohit_vs_monster"] = "Attack Rating Against Monsters";
	stat_cost_map["item_tohit_percent_vs_monster"] = "Bonus To Attack Rating Against Monsters";
	stat_cost_map["item_ac_vs_monster"] = "Defense vs. Monsters";
	stat_cost_map["item_ac_percent_vs_monster"] = "Enhanced Defense vs. Monsters";
	stat_cost_map["firelength"] = "Fire Damage Length";
	stat_cost_map["burningmin"] = "Minimum Fire Damage Length";
	stat_cost_map["burningmax"] = "Maximum Fire Damage Length";

	//what's this progressive stuff?!

	stat_cost_map["progressive_damage"] = "Progressive Damage";
	stat_cost_map["progressive_steal"] = "Progressive Steal";
	stat_cost_map["progressive_other"] = "Progressive Other";
	stat_cost_map["progressive_fire"] = "Progressive Fire";
	stat_cost_map["progressive_cold"] = "Progressive Cold";
	stat_cost_map["progressive_lightning"] = "Progressive Lightning";
	stat_cost_map["item_extra_charges"] = "Extra Charges";
	stat_cost_map["progressive_tohit"] = "Progressive Attack Rating";
	stat_cost_map["poison_count"] = "Poison Count";
	stat_cost_map["damage_framerate"] = "Damage Framerate";
	stat_cost_map["pierce_idx"] = "Pierce IDX"; //?!?!

	stat_cost_map["passive_fire_mastery"] = "Fire Mastery";
	stat_cost_map["passive_ltng_mastery"] = "Lightning Mastery";
	stat_cost_map["passive_cold_mastery"] = "Cold Mastery";
	stat_cost_map["passive_pois_mastery"] = "Poison Mastery";
	stat_cost_map["passive_fire_pierce"] = "Passive Enemy Fire Resistance Reduction";
	stat_cost_map["passive_ltng_pierce"] = "Passive Enemy Lightning Resistance Reduction";
	stat_cost_map["passive_cold_pierce"] = "Passive Enemy Cold Resistance Reduction";
	stat_cost_map["passive_pois_pierce"] = "Passive Enemy Poison Resistance Reduction";
	stat_cost_map["passive_critical_strike"] = "Critical Strike";
	stat_cost_map["passive_dodge"] = "Dodge";
	stat_cost_map["passive_avoid"] = "Avoid";
	stat_cost_map["passive_evade"] = "Evade";
	stat_cost_map["passive_warmth"] = "Warmth";

	//what is this mastery stuff? barbarian bonuses?

	stat_cost_map["passive_mastery_melee_th"] = "Melee Attack Rating Mastery";
	stat_cost_map["passive_mastery_melee_dmg"] = "Melee Damage Mastery";
	stat_cost_map["passive_mastery_melee_crit"] = "Melee Critical Hit Mastery";
	stat_cost_map["passive_mastery_throw_th"] = "Thrown Weapon Attack Rating Mastery";
	stat_cost_map["passive_mastery_throw_dmg"] = "Thrown Weapon Damage Mastery";
	stat_cost_map["passive_mastery_throw_crit"] = "Thrown Weapon Critical Hit Mastery";
	stat_cost_map["passive_weaponblock"] = "Weapon Block";
	stat_cost_map["passive_summon_resist"] = "Summon Resist";
	stat_cost_map["modifierlist_skill"] = "Modifier List Skill"; //?
	stat_cost_map["modifierlist_level"] = "Modifier List Level"; //?
	stat_cost_map["last_sent_hp_pct"] = "Last Sent Life Percent"; //?
	stat_cost_map["source_unit_type"] = "Source Unit Type"; //?
	stat_cost_map["source_unit_id"] = "Source Unit ID"; //?
	stat_cost_map["shortparam1"] = "Short Parameter 1"; //?
	stat_cost_map["questitemdifficulty"] = "Quest Item Difficulty"; //?
	stat_cost_map["passive_mag_mastery"] = "Passive Magical Damage Mastery"; //?!
	stat_cost_map["passive_mag_pierce"] = "Passive Magical Resistance Reduction"; //?
}
