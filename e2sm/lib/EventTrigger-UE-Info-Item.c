/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm-rc-2.0.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#include "EventTrigger-UE-Info-Item.h"

#include "EventTrigger-UE-Info-Item-Choice-Individual.h"
#include "EventTrigger-UE-Info-Item-Choice-Group.h"
static asn_oer_constraints_t asn_OER_type_ueType_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ueType_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ueType_3[] = {
	{ ATF_POINTER, 0, offsetof(struct EventTrigger_UE_Info_Item__ueType, choice.ueType_Choice_Individual),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EventTrigger_UE_Info_Item_Choice_Individual,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ueType-Choice-Individual"
		},
	{ ATF_POINTER, 0, offsetof(struct EventTrigger_UE_Info_Item__ueType, choice.ueType_Choice_Group),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EventTrigger_UE_Info_Item_Choice_Group,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ueType-Choice-Group"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ueType_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ueType-Choice-Individual */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ueType-Choice-Group */
};
static asn_CHOICE_specifics_t asn_SPC_ueType_specs_3 = {
	sizeof(struct EventTrigger_UE_Info_Item__ueType),
	offsetof(struct EventTrigger_UE_Info_Item__ueType, _asn_ctx),
	offsetof(struct EventTrigger_UE_Info_Item__ueType, present),
	sizeof(((struct EventTrigger_UE_Info_Item__ueType *)0)->present),
	asn_MAP_ueType_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ueType_3 = {
	"ueType",
	"ueType",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_ueType_constr_3, &asn_PER_type_ueType_constr_3, CHOICE_constraint },
	asn_MBR_ueType_3,
	2,	/* Elements count */
	&asn_SPC_ueType_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_EventTrigger_UE_Info_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EventTrigger_UE_Info_Item, eventTriggerUEID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RIC_EventTrigger_UE_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eventTriggerUEID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EventTrigger_UE_Info_Item, ueType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ueType_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ueType"
		},
	{ ATF_POINTER, 1, offsetof(struct EventTrigger_UE_Info_Item, logicalOR),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LogicalOR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logicalOR"
		},
};
static const int asn_MAP_EventTrigger_UE_Info_Item_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_EventTrigger_UE_Info_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EventTrigger_UE_Info_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eventTriggerUEID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ueType */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* logicalOR */
};
asn_SEQUENCE_specifics_t asn_SPC_EventTrigger_UE_Info_Item_specs_1 = {
	sizeof(struct EventTrigger_UE_Info_Item),
	offsetof(struct EventTrigger_UE_Info_Item, _asn_ctx),
	asn_MAP_EventTrigger_UE_Info_Item_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_EventTrigger_UE_Info_Item_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EventTrigger_UE_Info_Item = {
	"EventTrigger-UE-Info-Item",
	"EventTrigger-UE-Info-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_EventTrigger_UE_Info_Item_tags_1,
	sizeof(asn_DEF_EventTrigger_UE_Info_Item_tags_1)
		/sizeof(asn_DEF_EventTrigger_UE_Info_Item_tags_1[0]), /* 1 */
	asn_DEF_EventTrigger_UE_Info_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_EventTrigger_UE_Info_Item_tags_1)
		/sizeof(asn_DEF_EventTrigger_UE_Info_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_EventTrigger_UE_Info_Item_1,
	3,	/* Elements count */
	&asn_SPC_EventTrigger_UE_Info_Item_specs_1	/* Additional specs */
};

