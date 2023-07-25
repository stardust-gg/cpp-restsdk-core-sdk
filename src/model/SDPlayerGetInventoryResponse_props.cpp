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



#include "StardustCoreSDK/model/SDPlayerGetInventoryResponse_props.h"

namespace gg {
namespace stardust {
namespace coresdk {
namespace model {



SDPlayerGetInventoryResponse_props::SDPlayerGetInventoryResponse_props()
{
    m_ImmutableIsSet = false;
    m_r_mutableIsSet = false;
    m_InheritedIsSet = false;
}

SDPlayerGetInventoryResponse_props::~SDPlayerGetInventoryResponse_props()
{
}

void SDPlayerGetInventoryResponse_props::validate()
{
    // TODO: implement validation
}

web::json::value SDPlayerGetInventoryResponse_props::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ImmutableIsSet)
    {
        val[utility::conversions::to_string_t(U("immutable"))] = ModelBase::toJson(m_Immutable);
    }
    if(m_r_mutableIsSet)
    {
        val[utility::conversions::to_string_t(U("mutable"))] = ModelBase::toJson(m_r_mutable);
    }
    if(m_InheritedIsSet)
    {
        val[utility::conversions::to_string_t(U("inherited"))] = ModelBase::toJson(m_Inherited);
    }

    return val;
}

bool SDPlayerGetInventoryResponse_props::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("immutable"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("immutable")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_setImmutable;
            ok &= ModelBase::fromJson(fieldValue, refVal_setImmutable);
            setImmutable(refVal_setImmutable);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("mutable"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("mutable")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_setRMutable;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRMutable);
            setRMutable(refVal_setRMutable);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("inherited"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("inherited")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_setInherited;
            ok &= ModelBase::fromJson(fieldValue, refVal_setInherited);
            setInherited(refVal_setInherited);
        }
    }
    return ok;
}

void SDPlayerGetInventoryResponse_props::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ImmutableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("immutable")), m_Immutable));
    }
    if(m_r_mutableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("mutable")), m_r_mutable));
    }
    if(m_InheritedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("inherited")), m_Inherited));
    }
}

bool SDPlayerGetInventoryResponse_props::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("immutable"))))
    {
        std::shared_ptr<Object> refVal_setImmutable;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("immutable"))), refVal_setImmutable );
        setImmutable(refVal_setImmutable);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("mutable"))))
    {
        std::shared_ptr<Object> refVal_setRMutable;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("mutable"))), refVal_setRMutable );
        setRMutable(refVal_setRMutable);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("inherited"))))
    {
        std::shared_ptr<Object> refVal_setInherited;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("inherited"))), refVal_setInherited );
        setInherited(refVal_setInherited);
    }
    return ok;
}

std::shared_ptr<Object> SDPlayerGetInventoryResponse_props::getImmutable() const
{
    return m_Immutable;
}

void SDPlayerGetInventoryResponse_props::setImmutable(const std::shared_ptr<Object>& value)
{
    m_Immutable = value;
    m_ImmutableIsSet = true;
}

bool SDPlayerGetInventoryResponse_props::immutableIsSet() const
{
    return m_ImmutableIsSet;
}

void SDPlayerGetInventoryResponse_props::unsetImmutable()
{
    m_ImmutableIsSet = false;
}
std::shared_ptr<Object> SDPlayerGetInventoryResponse_props::getRMutable() const
{
    return m_r_mutable;
}

void SDPlayerGetInventoryResponse_props::setRMutable(const std::shared_ptr<Object>& value)
{
    m_r_mutable = value;
    m_r_mutableIsSet = true;
}

bool SDPlayerGetInventoryResponse_props::rMutableIsSet() const
{
    return m_r_mutableIsSet;
}

void SDPlayerGetInventoryResponse_props::unsetr_mutable()
{
    m_r_mutableIsSet = false;
}
std::shared_ptr<Object> SDPlayerGetInventoryResponse_props::getInherited() const
{
    return m_Inherited;
}

void SDPlayerGetInventoryResponse_props::setInherited(const std::shared_ptr<Object>& value)
{
    m_Inherited = value;
    m_InheritedIsSet = true;
}

bool SDPlayerGetInventoryResponse_props::inheritedIsSet() const
{
    return m_InheritedIsSet;
}

void SDPlayerGetInventoryResponse_props::unsetInherited()
{
    m_InheritedIsSet = false;
}
}
}
}
}


