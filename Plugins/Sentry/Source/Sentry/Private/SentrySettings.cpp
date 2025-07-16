#include "SentrySettings.h"
#include "SentryBeforeSendHandler.h"
#include "SentryTraceSampler.h"

USentrySettings::USentrySettings() {
    this->InitAutomatically = false;
    this->Dsn = TEXT("https://189fe674c99a2453d0b58f0362c41e98@o4509151073796096.ingest.de.sentry.io/4509151077204048");
    this->Debug = true;
    this->Environment = TEXT("Release");
    this->SampleRate = 1.00f;
    this->EnableAutoLogAttachment = true;
    this->AttachStacktrace = true;
    this->SendDefaultPii = false;
    this->AttachScreenshot = true;
    this->AttachGpuDump = true;
    this->MaxBreadcrumbs = 100;
    this->EnableAutoSessionTracking = true;
    this->SessionTimeout = 30000;
    this->OverrideReleaseName = false;
    this->UseProxy = false;
    this->BeforeSendHandler = USentryBeforeSendHandler::StaticClass();
    this->EnableAutoCrashCapturing = true;
    this->DatabaseLocation = ESentryDatabaseLocation::ProjectUserDirectory;
    this->EnableAppNotRespondingTracking = false;
    this->EnableTracing = false;
    this->SamplingType = ESentryTracesSamplingType::UniformSampleRate;
    this->TracesSampleRate = 0.00f;
    this->TracesSampler = USentryTraceSampler::StaticClass();
    this->EnableForPromotedBuildsOnly = false;
    this->UploadSymbolsAutomatically = false;
    this->IncludeSources = false;
    this->DiagnosticLevel = ESentryCliLogLevel::Info;
    this->UseLegacyGradlePlugin = false;
    this->CrashReporterUrl = TEXT("https://o4509151073796096.ingest.de.sentry.io/api/4509151077204048/unreal/189fe674c99a2453d0b58f0362c41e98/");
}


