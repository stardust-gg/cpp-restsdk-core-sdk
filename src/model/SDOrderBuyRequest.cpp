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



#include "StardustCoreSDK/model/SDOrderBuyRequest.h"

namespace gg {
namespace stardust {
namespace coresdk {
namespace model {



SDOrderBuyRequest::SDOrderBuyRequest()
{
    m_OrderId = 0;
    m_OrderIdIsSet = false;
    m_AcceptedBy = utility::conversions::to_string_t("");
    m_AcceptedByIsSet = false;
}

SDOrderBuyRequest::~SDOrderBuyRequest()
{
}

void SDOrderBuyRequest::validate()
{
    // TODO: implement validation
}

web::json::value SDOrderBuyRequest::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_OrderIdIsSet)
    {
        val[utility::conversions::to_string_t(U("orderId"))] = ModelBase::toJson(m_OrderId);
    }
    if(m_AcceptedByIsSet)
    {
        val[utility::conversions::to_string_t(U("acceptedBy"))] = ModelBase::toJson(m_AcceptedBy);
    }

    return val;
}

bool SDOrderBuyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("orderId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("orderId")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setOrderId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOrderId);
            setOrderId(refVal_setOrderId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("acceptedBy"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("acceptedBy")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAcceptedBy;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAcceptedBy);
            setAcceptedBy(refVal_setAcceptedBy);
        }
    }
    return ok;
}

void SDOrderBuyRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_OrderIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("orderId")), m_OrderId));
    }
    if(m_AcceptedByIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("acceptedBy")), m_AcceptedBy));
    }
}

bool SDOrderBuyRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("orderId"))))
    {
        int32_t refVal_setOrderId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("orderId"))), refVal_setOrderId );
        setOrderId(refVal_setOrderId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("acceptedBy"))))
    {
        utility::string_t refVal_setAcceptedBy;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("acceptedBy"))), refVal_setAcceptedBy );
        setAcceptedBy(refVal_setAcceptedBy);
    }
    return ok;
}

int32_t SDOrderBuyRequest::getOrderId() const
{
    return m_OrderId;
}

void SDOrderBuyRequest::setOrderId(int32_t value)
{
    m_OrderId = value;
    m_OrderIdIsSet = true;
}

bool SDOrderBuyRequest::orderIdIsSet() const
{
    return m_OrderIdIsSet;
}

void SDOrderBuyRequest::unsetOrderId()
{
    m_OrderIdIsSet = false;
}
utility::string_t SDOrderBuyRequest::getAcceptedBy() const
{
    return m_AcceptedBy;
}

void SDOrderBuyRequest::setAcceptedBy(const utility::string_t& value)
{
    m_AcceptedBy = value;
    m_AcceptedByIsSet = true;
}

bool SDOrderBuyRequest::acceptedByIsSet() const
{
    return m_AcceptedByIsSet;
}

void SDOrderBuyRequest::unsetAcceptedBy()
{
    m_AcceptedByIsSet = false;
}
}
}
}
}


