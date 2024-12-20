/// Abstract class representing a setting applied at the the module level.
Class %ZPM.PackageManager.Developer.ModuleSetting Extends (%SerialObject, %XML.Adaptor, %ZPM.PackageManager.Core.ComparisonAdaptor) [ Abstract ]
{

Parameter NAMESPACE As STRING = "http://www.intersystems.com/PackageManager";

Storage Default
{
<StreamLocation>^%ZPM.Package360D.ModuleSettingS</StreamLocation>
<Type>%Library.CacheSerialState</Type>
}

}
