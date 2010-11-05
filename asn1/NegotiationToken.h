/*
 * Generated by asn1c-0.9.22.1409 (http://lionet.info/asn1c)
 * From ASN.1 module "SPNEGO"
 * 	found in "spnego.asn1"
 * 	`asn1c -fnative-types -fskeletons-copy -fcompound-names`
 */

#ifndef	_NegotiationToken_H_
#define	_NegotiationToken_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NegTokenInit.h"
#include "NegTokenResp.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NegotiationToken_PR {
	NegotiationToken_PR_NOTHING,	/* No components present */
	NegotiationToken_PR_negTokenInit,
	NegotiationToken_PR_negTokenResp
} NegotiationToken_PR;

/* NegotiationToken */
typedef struct NegotiationToken {
	NegotiationToken_PR present;
	union NegotiationToken_u {
		NegTokenInit_t	 negTokenInit;
		NegTokenResp_t	 negTokenResp;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NegotiationToken_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NegotiationToken;

#ifdef __cplusplus
}
#endif

#endif	/* _NegotiationToken_H_ */
