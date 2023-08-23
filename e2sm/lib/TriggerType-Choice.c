/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm-rc-2.0.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#include "TriggerType-Choice.h"

#include "TriggerType-Choice-RRCstate.h"
#include "TriggerType-Choice-UEID.h"
#include "TriggerType-Choice-L2state.h"
static asn_oer_constraints_t asn_OER_type_TriggerType_Choice_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_TriggerType_Choice_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_TriggerType_Choice_1[] = {
	{ ATF_POINTER, 0, offsetof(struct TriggerType_Choice, choice.triggerType_Choice_RRCstate),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TriggerType_Choice_RRCstate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"triggerType-Choice-RRCstate"
		},
	{ ATF_POINTER, 0, offsetof(struct TriggerType_Choice, choice.triggerType_Choice_UEID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TriggerType_Choice_UEID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"triggerType-Choice-UEID"
		},
	{ ATF_POINTER, 0, offsetof(struct TriggerType_Choice, choice.triggerType_Choice_L2state),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TriggerType_Choice_L2state,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"triggerType-Choice-L2state"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_TriggerType_Choice_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* triggerType-Choice-RRCstate */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* triggerType-Choice-UEID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* triggerType-Choice-L2state */
};
asn_CHOICE_specifics_t asn_SPC_TriggerType_Choice_specs_1 = {
	sizeof(struct TriggerType_Choice),
	offsetof(struct TriggerType_Choice, _asn_ctx),
	offsetof(struct TriggerType_Choice, present),
	sizeof(((struct TriggerType_Choice *)0)->present),
	asn_MAP_TriggerType_Choice_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	3	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_TriggerType_Choice = {
	"TriggerType-Choice",
	"TriggerType-Choice",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_TriggerType_Choice_constr_1, &asn_PER_type_TriggerType_Choice_constr_1, CHOICE_constraint },
	asn_MBR_TriggerType_Choice_1,
	3,	/* Elements count */
	&asn_SPC_TriggerType_Choice_specs_1	/* Additional specs */
};

