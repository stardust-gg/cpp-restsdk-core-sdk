/**
 * Stardust API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 2023-06-15T19:52:41Z
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.5.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * HealthEndpointsApi.h
 *
 * 
 */

#ifndef GG_STARDUST_CORESDK_HealthEndpointsApi_H_
#define GG_STARDUST_CORESDK_HealthEndpointsApi_H_



#include "StardustCoreSDK/ApiClient.h"

#include "StardustCoreSDK/model/Error.h"
#include "StardustCoreSDK/model/SDHealthResponse.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace gg {
namespace stardust {
namespace coresdk {

using namespace gg::stardust::coresdk::model;

class  IHealthEndpointsApi
{
public:
    IHealthEndpointsApi() = default;
    virtual ~IHealthEndpointsApi() = default;

    virtual pplx::task<std::shared_ptr<SDHealthResponse>> healthGet(
    ) const = 0;
};

class  HealthEndpointsApi  : public IHealthEndpointsApi 
{
public:
    using Base = IHealthEndpointsApi;

    explicit HealthEndpointsApi( std::shared_ptr<const ApiClient> apiClient );

    ~HealthEndpointsApi() override;

    /// <summary>
    /// Get Health
    /// </summary>
    /// <remarks>
    /// Get system health info
    /// </remarks>
    pplx::task<std::shared_ptr<SDHealthResponse>> healthGet(
    ) const override;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}

#endif /* GG_STARDUST_CORESDK_HealthEndpointsApi_H_ */
