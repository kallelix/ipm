Class %ZPM.Types.Identifier Extends %DataType [ System = 2 ]
{

ClassMethod IsValid(%val As %ZPM.Types.RawString) As %Status [ CodeMode = expression ]
{
$select($length(%val)'>$$$MAXNAMELENGTH&&(%val'="")||(%val["||")||(%val["."):$$$OK,1:$$$ERROR(5794,"%ZPM.Types.Identifier",%val))
}

}

