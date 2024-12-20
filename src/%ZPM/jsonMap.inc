#;Macros for JSON map
	; Copyright (c) 2024 by InterSystems Corporation.
	; Cambridge, Massachusetts, U.S.A.  All rights reserved.
	; Confidential property of InterSystems Corporation.
#define jsonclass(%map,%name)               $listget(%map(%name,0),1)
#define jsonignoreinvalidfield(%map,%name)  $listget(%map(%name,0),2)
#define jsonpropertycount(%map,%name)       $get(%map(%name))
#define jsongetprop(%map,%name,%idx)        $get(%map(%name,%idx))
#define jsonproperty(%node)     $list(%node,1)
#define jsonpropertyQN(%node)   $list(%node,2)
#; Possible values of jsoninclude are "N","I","O","IO"
#define jsoninclude(%node)      $list(%node,3)
#define jsonfieldname(%node)    $list(%node,4)
#define jsonnull(%node)         $list(%node,5)
#define jsonignorenull(%node)   $list(%node,6)
#; Possible jsonreference values
#define jsonrefobject    1
#define jsonrefid        2
#define jsonrefoid       3
#define jsonrefguid      4
#define jsonreference(%node)    $list(%node,7)
#define jsonrequired(%node)     $list(%node,8)
#define jsonliteraltype(%node)  $list(%node,9)
#define jsonmembercat(%node)    $list(%node,10)
#define jsontype(%node)         $list(%node,11)
#define jsonmapping(%node)      $list(%node,12)
#;
#; isCollectionValue possibilities
#define isCollectionList   1
#define isCollectionArray  2
#; External display format for mapping name
#define mappingNameDisplay(%name)  $select(%name="":"class base",1:%name)
  
 

#define JSONInvalidDefaultParameter                        9400
#define JSONInvalidPropertyParameter                       9401
#define JSONNoStreamArray                                  9402
#define JSONMaxString                                      9403
#define JSONImportBadField                                 9404
#define JSONImportRequired                                 9405
#define JSONImportError                                    9406
#define JSONUnexpectedNamespace                            9407
#define JSONExtraMapping                                   9408
#define JSONNoPropertyName                                 9409
#define JSONUnexpectedPropertyName                         9410
#define JSONRefNotEnabled                                  9411

#define JSONGetTypeOf(%object,%key) $CASE(%object.%GetTypeCodeOf(%key),$$$PVVALUENULL:"null",$$$PVVALUETRUE:"boolean",$$$PVVALUEFALSE:"boolean",$$$PVVALUEINTEGERPOS:"number",$$$PVVALUEINTEGERNEG:"number",$$$PVVALUEARRAY:"array",$$$PVVALUEOBJECT:"object",$$$PVVALUETEXT:"string",$$$PVVALUENUMBER:"number",$$$PVVALUELONGTEXT:"string",$$$PVVALUECACHENUMERIC:"number",$$$PVVALUEOREF:"oref",$$$PVVALUEUNASSIGNED:"unassigned",$$$PVVALUELONGPOS:"number",$$$PVVALUELONGNEG:"number",$$$PVVALUEBYTE:"string",$$$PVVALUEDOUBLE:"number",$$$PVVALUESINGLE:"number",$$$PVVALUEUTF8:"string",$$$PVVALUEEOF:"unassigned",:"UNKNOWN")
#define JSONConvertType(%typecode) $CASE(%typecode,$$$PVVALUENULL:"null",$$$PVVALUETRUE:"boolean",$$$PVVALUEFALSE:"boolean",$$$PVVALUEINTEGERPOS:"number",$$$PVVALUEINTEGERNEG:"number",$$$PVVALUEARRAY:"array",$$$PVVALUEOBJECT:"object",$$$PVVALUETEXT:"string",$$$PVVALUENUMBER:"number",$$$PVVALUELONGTEXT:"string",$$$PVVALUECACHENUMERIC:"number",$$$PVVALUEOREF:"oref",$$$PVVALUEUNASSIGNED:"unassigned",$$$PVVALUELONGPOS:"number",$$$PVVALUELONGNEG:"number",$$$PVVALUEBYTE:"string",$$$PVVALUEDOUBLE:"number",$$$PVVALUESINGLE:"number",$$$PVVALUEUTF8:"string",$$$PVVALUEEOF:"unassigned",:"UNKNOWN")

#define	PVVALUELONGTEXT	     10
