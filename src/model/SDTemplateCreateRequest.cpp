/**
 * Stardust API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 2023-07-25T00:59:12Z
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.5.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "StardustCoreSDK/model/SDTemplateCreateRequest.h"

namespace gg {
namespace stardust {
namespace coresdk {
namespace model {



SDTemplateCreateRequest::SDTemplateCreateRequest()
{
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Cap = utility::conversions::to_string_t("");
    m_CapIsSet = false;
    m_ContractType = utility::conversions::to_string_t("");
    m_ContractTypeIsSet = false;
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
    m_OwnerAddress = utility::conversions::to_string_t("");
    m_OwnerAddressIsSet = false;
    m_PropsIsSet = false;
    m_PublicContractMetadataIsSet = false;
    m_Symbol = utility::conversions::to_string_t("");
    m_SymbolIsSet = false;
}

SDTemplateCreateRequest::~SDTemplateCreateRequest()
{
}

void SDTemplateCreateRequest::validate()
{
    // TODO: implement validation
}

web::json::value SDTemplateCreateRequest::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_CapIsSet)
    {
        val[utility::conversions::to_string_t(U("cap"))] = ModelBase::toJson(m_Cap);
    }
    if(m_ContractTypeIsSet)
    {
        val[utility::conversions::to_string_t(U("contractType"))] = ModelBase::toJson(m_ContractType);
    }
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t(U("type"))] = ModelBase::toJson(m_Type);
    }
    if(m_OwnerAddressIsSet)
    {
        val[utility::conversions::to_string_t(U("ownerAddress"))] = ModelBase::toJson(m_OwnerAddress);
    }
    if(m_PropsIsSet)
    {
        val[utility::conversions::to_string_t(U("props"))] = ModelBase::toJson(m_Props);
    }
    if(m_PublicContractMetadataIsSet)
    {
        val[utility::conversions::to_string_t(U("publicContractMetadata"))] = ModelBase::toJson(m_PublicContractMetadata);
    }
    if(m_SymbolIsSet)
    {
        val[utility::conversions::to_string_t(U("symbol"))] = ModelBase::toJson(m_Symbol);
    }

    return val;
}

bool SDTemplateCreateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("cap"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("cap")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCap;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCap);
            setCap(refVal_setCap);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("contractType"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("contractType")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setContractType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setContractType);
            setContractType(refVal_setContractType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setType);
            setType(refVal_setType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ownerAddress"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ownerAddress")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setOwnerAddress;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOwnerAddress);
            setOwnerAddress(refVal_setOwnerAddress);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("props"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("props")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<SDTemplateCreateRequest_props> refVal_setProps;
            ok &= ModelBase::fromJson(fieldValue, refVal_setProps);
            setProps(refVal_setProps);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("publicContractMetadata"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("publicContractMetadata")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_setPublicContractMetadata;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPublicContractMetadata);
            setPublicContractMetadata(refVal_setPublicContractMetadata);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("symbol"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("symbol")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSymbol;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSymbol);
            setSymbol(refVal_setSymbol);
        }
    }
    return ok;
}

void SDTemplateCreateRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_CapIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("cap")), m_Cap));
    }
    if(m_ContractTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("contractType")), m_ContractType));
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("type")), m_Type));
    }
    if(m_OwnerAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ownerAddress")), m_OwnerAddress));
    }
    if(m_PropsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("props")), m_Props));
    }
    if(m_PublicContractMetadataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("publicContractMetadata")), m_PublicContractMetadata));
    }
    if(m_SymbolIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("symbol")), m_Symbol));
    }
}

bool SDTemplateCreateRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("cap"))))
    {
        utility::string_t refVal_setCap;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("cap"))), refVal_setCap );
        setCap(refVal_setCap);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("contractType"))))
    {
        utility::string_t refVal_setContractType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("contractType"))), refVal_setContractType );
        setContractType(refVal_setContractType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("type"))))
    {
        utility::string_t refVal_setType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("type"))), refVal_setType );
        setType(refVal_setType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ownerAddress"))))
    {
        utility::string_t refVal_setOwnerAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ownerAddress"))), refVal_setOwnerAddress );
        setOwnerAddress(refVal_setOwnerAddress);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("props"))))
    {
        std::shared_ptr<SDTemplateCreateRequest_props> refVal_setProps;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("props"))), refVal_setProps );
        setProps(refVal_setProps);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("publicContractMetadata"))))
    {
        std::shared_ptr<Object> refVal_setPublicContractMetadata;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("publicContractMetadata"))), refVal_setPublicContractMetadata );
        setPublicContractMetadata(refVal_setPublicContractMetadata);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("symbol"))))
    {
        utility::string_t refVal_setSymbol;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("symbol"))), refVal_setSymbol );
        setSymbol(refVal_setSymbol);
    }
    return ok;
}

utility::string_t SDTemplateCreateRequest::getName() const
{
    return m_Name;
}

void SDTemplateCreateRequest::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool SDTemplateCreateRequest::nameIsSet() const
{
    return m_NameIsSet;
}

void SDTemplateCreateRequest::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t SDTemplateCreateRequest::getCap() const
{
    return m_Cap;
}

void SDTemplateCreateRequest::setCap(const utility::string_t& value)
{
    m_Cap = value;
    m_CapIsSet = true;
}

bool SDTemplateCreateRequest::capIsSet() const
{
    return m_CapIsSet;
}

void SDTemplateCreateRequest::unsetCap()
{
    m_CapIsSet = false;
}
utility::string_t SDTemplateCreateRequest::getContractType() const
{
    return m_ContractType;
}

void SDTemplateCreateRequest::setContractType(const utility::string_t& value)
{
    m_ContractType = value;
    m_ContractTypeIsSet = true;
}

bool SDTemplateCreateRequest::contractTypeIsSet() const
{
    return m_ContractTypeIsSet;
}

void SDTemplateCreateRequest::unsetContractType()
{
    m_ContractTypeIsSet = false;
}
utility::string_t SDTemplateCreateRequest::getType() const
{
    return m_Type;
}

void SDTemplateCreateRequest::setType(const utility::string_t& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}

bool SDTemplateCreateRequest::typeIsSet() const
{
    return m_TypeIsSet;
}

void SDTemplateCreateRequest::unsetType()
{
    m_TypeIsSet = false;
}
utility::string_t SDTemplateCreateRequest::getOwnerAddress() const
{
    return m_OwnerAddress;
}

void SDTemplateCreateRequest::setOwnerAddress(const utility::string_t& value)
{
    m_OwnerAddress = value;
    m_OwnerAddressIsSet = true;
}

bool SDTemplateCreateRequest::ownerAddressIsSet() const
{
    return m_OwnerAddressIsSet;
}

void SDTemplateCreateRequest::unsetOwnerAddress()
{
    m_OwnerAddressIsSet = false;
}
std::shared_ptr<SDTemplateCreateRequest_props> SDTemplateCreateRequest::getProps() const
{
    return m_Props;
}

void SDTemplateCreateRequest::setProps(const std::shared_ptr<SDTemplateCreateRequest_props>& value)
{
    m_Props = value;
    m_PropsIsSet = true;
}

bool SDTemplateCreateRequest::propsIsSet() const
{
    return m_PropsIsSet;
}

void SDTemplateCreateRequest::unsetProps()
{
    m_PropsIsSet = false;
}
std::shared_ptr<Object> SDTemplateCreateRequest::getPublicContractMetadata() const
{
    return m_PublicContractMetadata;
}

void SDTemplateCreateRequest::setPublicContractMetadata(const std::shared_ptr<Object>& value)
{
    m_PublicContractMetadata = value;
    m_PublicContractMetadataIsSet = true;
}

bool SDTemplateCreateRequest::publicContractMetadataIsSet() const
{
    return m_PublicContractMetadataIsSet;
}

void SDTemplateCreateRequest::unsetPublicContractMetadata()
{
    m_PublicContractMetadataIsSet = false;
}
utility::string_t SDTemplateCreateRequest::getSymbol() const
{
    return m_Symbol;
}

void SDTemplateCreateRequest::setSymbol(const utility::string_t& value)
{
    m_Symbol = value;
    m_SymbolIsSet = true;
}

bool SDTemplateCreateRequest::symbolIsSet() const
{
    return m_SymbolIsSet;
}

void SDTemplateCreateRequest::unsetSymbol()
{
    m_SymbolIsSet = false;
}
}
}
}
}


